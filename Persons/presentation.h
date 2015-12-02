#ifndef PRESENTATION_H
#define PRESENTATION_H
#include "service.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Presentation : Service
{
public:
    Presentation();
    void Redirect(int number, Service serv, string &input);
    string GetInfo(string &str);
    int Choice();
    bool Continue();
    int HowToSort();
    void Sorting(Service serv, const int choose);
    void SortSex(Service serv);
};

#endif // PRESENTATION_H
