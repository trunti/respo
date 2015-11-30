#include "class2.h"

Class2::Class2()
{

}
void Class2::howToSort()
{
    cout << "------Short------" << endl;
    cout << "1 to short by name\n";
    cout << "2 to short by age\n";
    cout << "3 to short by sex\n";
    cout << "-------------------\n";
    cin >> choices;
}
void Class2::Sort()
{
    switch(choices){
    case 1:
        //SortByName();
        cout << "worked";
        break;
    case 2:
        //SortByAge();
        cout << "worked 2";
        break;
    case 3:
        //SortBySex();
        cout << "worked 3";
    default:
        cout << "Choose again!" << endl;
        howToSort();
            break;
    }
}
