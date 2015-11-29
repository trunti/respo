#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Class
{
public:
    Class();
    void ReadFile();
friend istream &operator >>(istream &is, Class &pers);
private:
    int Byear;
    int Dyear;
    string Name;
    string Sex;
    vector<Class> Persons;

};

#endif // CLASS_H
