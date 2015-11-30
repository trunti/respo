#include "class.h"
#include "search.h"

int Choice();
void Redirect(int number, Class &klass);
int main()
{
    Class klass;
    klass.ReadFile();
    int choice = Choice();
    Redirect(choice, klass);

    return 0;
}
int Choice()
{
    int choice;
    cout << "Welcome to computer scientists database." << endl;
    cout << "Here we have a list of important persons in the history of computer science." << endl;
    cout << "Please choose what you want to do in the database." << endl;
    cout << "1. Input a person to the list of computer scientists." << endl;
    cout << "2. Display the list in the database." << endl;
    cout << "3. Search in the database." << endl;
    cout << "Your choice: ";
    cin >> choice;
    return choice;
}
void Redirect(int number, Class &klass)
{
    string str;
    switch(number)
    {
        case 1:
            klass.InputToFile();
            klass.ReadFile();
        break;
        case 2:
            klass.DisplayList();
        break;
        case 3:
            cout << "What would you like to search for? " << endl;
            cin >> str;
            klass.Search(str);
        break;
        default:
            cout << "Invalid choice, choose again!" << endl;
            Choice();
    }
}
