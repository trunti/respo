#ifndef PRESENTATION_H
#define PRESENTATION_H
#include "service.h"
#include <iostream>
#include <vector>

using namespace std;

class Presentation : Service
{
public:
    Presentation();
    void Main();
    void Redirect(int number, Service serv, string &input);
    string GetInfo();
    int Choice();
};

#endif // PRESENTATION_H
