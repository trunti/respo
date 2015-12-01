#include "class.h"

Class::Class()
{

}
void Class::ReadFile()
{
    ifstream in_stream;
    Class pers;
    in_stream.open("Person.txt");
    if (in_stream.fail())
    {
        cout << "Input file opening failed.";
    }
    while(in_stream >> pers)
    {
        Persons.push_back(pers);
    }
    in_stream.close();
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

istream &operator >>(istream &is, Class &pers){
    getline(is,pers.Name,',');
    getline(is,pers.Sex,',');
    getline(is,pers.Byear,',');
    getline(is,pers.Dyear);
    return is;
}
void Class::InputToFile()
{
  ofstream a_file;
  a_file.open("Person.txt", ios::app);

  cout << "Name: ";
  cin.ignore();
  getline(cin, Name);
  a_file << endl << Name << ", ";
  cout << "Sex: ";
  cin >> Sex;
  a_file << Sex << ", ";
  cout << "Birth year: ";
  cin >> Byear;
  a_file << Byear << ", ";
  cout << "Year of death: ";
  cin >> Dyear;
  a_file << Dyear;

  a_file.close();

  cout << Name << " was added to the database!" << endl;
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
void Class::SortByName()
{
    sort(Persons.begin(), Persons.end());
    DisplayList();
}
void Class::SortByYear()
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
void Class::SortByYearD()
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
