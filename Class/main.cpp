#include "class.h"
#include "class2.h"
#include "search.h"

void FirstScreen();
int Choice();
void Redirect(const int number, Class &klass, int Sorting);
char Continue();
bool True(const char Cont);
void howToSort(const int Sorting, Class &klass);
int WhatSort(int &Sorting);

int main()
{
    char Cont;
    int Sorting = 0;
    FirstScreen();
    Class klass;
    klass.ReadFile();
    do {
    int choice = Choice();
    Redirect(choice, klass, Sorting);
    Cont = Continue();
    }while(True(Cont));
    return 0;
}
void FirstScreen()
{
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Welcome to computer scientists database." << endl;
    cout << "Here we have a list of important persons in the history of computer science." << endl;
}
int Choice()
{
    int choice;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Please choose what you want to do in the database." << endl;
    cout << "1. Input a person to the list of computer scientists." << endl;
    cout << "2. Display the list in the database in its current order." << endl;
    cout << "3. Search in the database." << endl;
    cout << "4. Sort the list and display it." << endl;
    cout << "Your choice: ";
    cin >> choice;
    return choice;
}
void Redirect(const int number, Class &klass, int Sorting)
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
        case 4:
            WhatSort(Sorting);
            howToSort(Sorting, klass);
        break;
        default:
            cout << "Invalid choice, the program does nothing!" << endl;
    }
}
char Continue()
{
    char Cont;
    cout << "Do you want to continue in the database?" << endl;
    cout << "Press Y to continue ";
    cin >> Cont;
    return Cont;
}
bool True(const char Cont)
{
    if(Cont == 'y' || Cont == 'Y')
    {
        return true;
    }
    return false;
}
int WhatSort(int &Sorting)
{
    cout << "--Desired way of sorting--" << endl;
    cout << "1. Sort by first names\n";
    cout << "2. Sort by year of birth\n";
    cout << "3. Sort by gender\n";
    cout << "--------------------------\n";
    cin >> Sorting;
    return Sorting;
}
void howToSort(const int Sorting, Class &klass)
{
    switch(Sorting){
    case 1:
        klass.SortByName();
        break;
    case 2:
        klass.SortByYear();
        break;
    case 3:
        klass.SortByYearD();
        break;
    default:
        cout << "Choose again!" << endl;
            break;
    }
}
