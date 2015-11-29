#include "class.h"

Class::Class()
{

}
void Class::ReadFile()
{
    ifstream in_stream;
    Class pers;
    in_stream.open("Person.txt");
    if (in_stream.fail()){
        cout << "Input file opening failed.";
    }
    while(in_stream >> pers){
        Persons.push_back(pers);
    }
    in_stream.close();
}
void Class::DisplayList()
{
    for(unsigned int i = 0;i < Persons.size();i++){
        cout << Persons[i].Name;
        cout << Persons[i].Byear;
        cout << Persons[i].Sex;
        cout << Persons[i].Dyear << endl;
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
}
