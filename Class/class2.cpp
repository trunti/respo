#include "class2.h"

Class2::Class2()
{

}
void Class2::howToSort()
{
    cout << "------Sort------" << endl;
    cout << "1 to sort by name\n";
    cout << "2 to sort by age\n";
    cout << "3 to sort by sex\n";
    cout << "-------------------\n";
    cin >> choices;
}
void Class2::Sort()
{
    switch(choices){
    case 1:
        //SortByName();
        break;
    case 2:
        //SortByAge();
        cout << "worked 2";
        break;
    case 3:
        //SortBySex();
        cout << "worked 3";
        break;
    default:
        cout << "Choose again!" << endl;
            break;
    }
}
/*void Class2::SortByName()
{
    sort(Persons.begin(), Persons.end());
    for(unsigned int i = 0;i < Persons.size();i++){
        cout << Persons[i].Name;
        cout << Persons[i].Byear;
        cout << Persons[i].Sex;
        cout << Persons[i].Dyear << endl;
    }
}
*/
