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
   void setServiceVector(vector<string> Transfer);
   void MakeSplitVec();
   string findsubstr(int &numb,int &start,const int i,vector<string> service);
   void DisplayList();
   void Search(string str);
   void SortByName();
   void SortByYear();
   void SortByYearD();
private:
   string Byear;
   string Dyear;
   string Name;
   string Sex;
   vector<string> service;
protected:
   vector<Service> Persons;

friend bool operator <(const Service &a, const Service &b){return a.Name < b.Name;}
};

#endif // SERVICE_H



