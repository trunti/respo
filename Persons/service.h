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
   void setServiceVector();
   void tttest();
private:
   string Byear;
   string Dyear;
   string Name;
   string Sex;
   vector<string> service;
};

#endif // SERVICE_H



