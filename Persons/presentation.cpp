#include "presentation.h"

Presentation::Presentation()
{
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Welcome to computer scientists database." << endl;
    cout << "Here we have a list of important persons in the history of computer science." << endl;
}
void Presentation::Main()
{
    Choice();
}
int Presentation::Choice()
{
    int choice;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Please choose what you want to do in the database." << endl;
    cout << "1. Input a person to the list of computer scientists." << endl;
    cout << "2. Display the list in the database." << endl;
    cout << "3. Search in the database." << endl;
    cout << "Your choice: ";
    cin >> choice;
    return choice;
}
void Redirect(const int number)
{
    string str;
    switch(number)
    {
        case 1:


        break;
        case 2:

        break;
        case 3:
            cout << "What would you like to search for? ";
            cin >> str;
        break;
        default:
            cout << "Invalid choice, the program does nothing!" << endl;
    }
}
