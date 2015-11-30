#include "class.h"
#include "search.h"

int Choice();
void Redirect(int number, Class &klass);
int main()
{
    Class klass;
    klass.ReadFile();
    klass.Search();
    //int choice = Choice();
    //Redirect(choice, klass);

    return 0;
}
int Choice()
{
    int choice;
    cout << "Welcome to computer scientists database." << endl;
    cout << "Here we have a list of important persons in the history of computer science." << endl;
    cout << "Please choose what you want to do in the database." << endl;
    cout << "1. Input a person to the list of computer scientists." << endl;
    cout << "2. Display the list in the database" << endl;
    cout << "Your choice: ";
    cin >> choice;
    return choice;
}
void Redirect(int number, Class &klass)
{
    switch(number)
    {
        case 1:
            klass.InputToFile();
        break;
        case 2:
            klass.ReadFile();
            klass.DisplayList();
        break;
        default:
            cout << "Invalid choice, choose again!" << endl;
            Choice();
    }
}
