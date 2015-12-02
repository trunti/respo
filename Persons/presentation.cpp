#include "presentation.h"

Presentation::Presentation()
{
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Welcome to computer scientists database." << endl;
    cout << "Here we have a list of important persons in the history of computer science." << endl;
}
int Presentation::Choice()
{
    int choice;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Please choose what you want to do in the database." << endl;
    cout << "1. Input a person to the list of computer scientists." << endl;
    cout << "2. Display the list in the database." << endl;
    cout << "3. Search in the database." << endl;
    cout << "Your your choice: ";
    cin >> choice;
    cout << endl;
    return choice;
}
void Presentation::Redirect(int number, Service serv,string &input)
{
    string str;
    Service ser;
    int choose;
    switch(number)
    {
        case 1:
            cout << "Input info on computer nerd. ";
            input = GetInfo(str);
            if(!serv.CheckName(str)){
                input = "";
                cout << "This person is already in our database!" << endl;
            }
        break;
        case 2:
            choose = HowToSort();
            Sorting(serv, choose);
        break;
        case 3:
            cout << "What would you like to search for? ";
            cin >> str;
            serv.Search(str);
        break;
        default:
            cout << "Invalid choice, the program does nothing!" << endl;
    }
}
string Presentation::GetInfo(string &str){
    string name,sex,byear,dyear;
    cout << endl << "Input full name: ";
    cin.ignore();
    getline(cin, name);
    str = name;
    name += ", ";
    cout << "Sex: ";
    cin >> sex;
    sex += ", ";
    cout << "Birth year: ";
    cin >> byear;
    byear += ", ";
    cout << "Year of death if still kicking put Alive: ";
    cin >> dyear;
    return name + sex + byear + dyear;
}

bool Presentation::Continue(){
    char cont;

    cout << "To continue enter y: ";
    cin >> cont;
    if(cont == 'y'){
        return true;
    }else{
        return false;
    }
}
int Presentation::HowToSort()
{
    int Sorting;

    cout << "--Desired way of sorting--" << endl;
    cout << "1. Sort by first names" << endl;
    cout << "2. Sort by year of birth" << endl;
    cout << "3. Sort by year of death" << endl;
    cout << "4. Sort by Sex" << endl;
    cout << "--------------------------\n";
    cout << "Enter your choice: ";
    cin >> Sorting;
    cout << endl;
    return Sorting;
}

void Presentation::Sorting(Service serv, const int choose)
{
    switch(choose)
    {
    case 1:
        serv.SortByName();
    break;
    case 2:
        serv.SortByYear();
    break;
    case 3:
        serv.SortByYearD();
    break;
    case 4:
        SortSex(serv);
    break;
    default:
        cout << "That's not an option!" << endl;
    }
}
void Presentation::SortSex(Service serv){
    int morf;
    cout << "--Desired way of sorting--" << endl;
    cout << "1. Females" << endl;
    cout << "2. Males" << endl;
    cout << "--------------------------\n";
    cout << "Enter your choice: ";
    cin >> morf;
    switch(morf)
    {
    case 1:
        serv.SortBySex("Female");
    break;
    case 2:
        serv.SortBySex("Male");
    break;
    default:
        cout << "That's not an option!" << endl;
    }

}
