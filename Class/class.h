#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

class Class
{
public:
    Class();
    void ReadFile();
    void DisplayList();
    void InputToFile();
    void Search(string str);
    void SortByName();
    void SortByYear();
friend bool operator <(const Class &a, const Class &b){return a.Name < b.Name;}
friend istream &operator >>(istream &is, Class &pers);
private:
    string Byear;
    string Dyear;
    string Name;
    string Sex;
    vector<Class> Persons;

};

#endif // CLASS_H
