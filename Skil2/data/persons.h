#ifndef PERSONS_H
#define PERSONS_H

// Klasi af einstaklingum í gagnagrunni

#include <iostream>
using namespace std;

class Persons
{
public:
    Persons();
private:
    string name;
    string gender;
    int yearb;
    int yeard;
};

#endif // PERSONS_H
