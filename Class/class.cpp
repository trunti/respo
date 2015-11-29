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
    for(unsigned int i = 0;i < Persons.size();i++){
        cout << Persons[i].Name;
    }

}

istream &operator >>(istream &is, Class &pers){
    getline(is,pers.Name,',');
    getline(is,pers.Byear,',');
    getline(is,pers.Sex,',');
    getline(is,pers.Dyear,',');
    return is;
}
