#ifndef SERVICE_H
#define SERVICE_H
#include "data.h"
#include <iostream>
#include <vector>

using namespace std;


class Service : Data
{
public:
   Service();
   void SortByName();
   void SortByYear();
   void SortByYearD();
   void Search(string str);
private:
   string Byear;
   string Dyear;
   string Name;
   string Sex;
   vector<string> service;
};

#endif // SERVICE_H



