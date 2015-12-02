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
   string findsubstr(int &numb, int &start, const int i);
   void DisplayList();
   void Search(string str);
   void SortByName();
   void SortByYear();
   void SortByYearD();
   void SortBySex(string str);
   void AddName(string str);
   bool CheckName(string str);
   void displayscientist(const int i);
   int Getrandomscientist();
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



