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
   void setServiceVector(vector<string> blah);
   void tttest();
   void MakeSplitVec();
   string findsubstr(int &numb,int &start,const int i,vector<string> service);
private:
   string Byear;
   string Dyear;
   string Name;
   string Sex;
   vector<string> service;
   vector<Service> MainV;
};

#endif // SERVICE_H



