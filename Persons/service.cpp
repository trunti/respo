#include "service.h"

Service::Service()
{

}
istream &operator >>(istream &is, Class &pers){
    getline(is,pers.Name,',');
    getline(is,pers.Sex,',');
    getline(is,pers.Byear,',');
    getline(is,pers.Dyear);
    return is;
}
void Class::DisplayList()
{
    cout << "----------------------------------------" << endl;
    for(unsigned int i = 0;i < Persons.size();i++){
        cout << Persons[i].Name;
        cout << Persons[i].Byear;
        cout << Persons[i].Sex;
        cout << Persons[i].Dyear << endl;
        cout << "----------------------------------------" << endl;
    }
}
void Class::Search(string str){
    for(unsigned int i = 0; i < Persons.size(); i++){
        if(Persons[i].Name.find(str) != string::npos)
        {
            cout << Persons[i].Name << Persons[i].Sex << Persons[i].Byear << Persons[i].Dyear << endl;
        }
        else if(Persons[i].Sex.find(str) != string::npos)
        {
            cout << Persons[i].Name << Persons[i].Sex << Persons[i].Byear << Persons[i].Dyear << endl;
        }
        else if(Persons[i].Byear.find(str) != string::npos)
        {
            cout << Persons[i].Name << Persons[i].Sex << Persons[i].Byear << Persons[i].Dyear << endl;
        }
        else if(Persons[i].Dyear.find(str) != string::npos)
        {
            cout << Persons[i].Name << Persons[i].Sex << Persons[i].Byear << Persons[i].Dyear << endl;
        }
    }
}
void Service::SortByName()
{
    sort(Persons.begin(), Persons.end());
    DisplayList();
}
void Service::SortByYear()
{
    int j;

    for (unsigned int i = 0; i < Persons.size(); i++){
        j = i;

        while (j > 0 && Persons[j].Byear < Persons[j-1].Byear)
        {
              swap(Persons[j],Persons[j-1]);
              j--;
        }
    }
    DisplayList();
}
void Service::SortByYearD()
{
    int j;

    for (unsigned int i = 0; i < Persons.size(); i++){
        j = i;

        while (j > 0 && Persons[j].Dyear < Persons[j-1].Dyear)
        {
            swap(Persons[j],Persons[j-1]);
            j--;
        }
    }
    DisplayList();
}
