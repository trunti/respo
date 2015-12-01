#include "service.h"

Service::Service()
{

}
void Service::setServiceVector(vector<string> Transfer){
    service = Transfer;
}
void Service::AddName(string str){
    service.push_back(str);
    Persons.clear();
}

void Service::MakeSplitVec(){
        int start = 0, numb;
        Service serv;
        for(unsigned int i = 0;i < service.size();i++)
        {
            start = 0;
            serv.Name = findsubstr(numb,start,i,service);
            serv.Sex = findsubstr(numb,start,i,service);
            serv.Byear = findsubstr(numb,start,i,service);
            serv.Dyear = findsubstr(numb,start,i,service);
            Persons.push_back(serv);
        }
}
string Service::findsubstr(int &numb,int &start,const int i,vector<string> service){
   numb = service[i].find(',',start);
   string str = service[i].substr(start,numb-start);
   start = numb + 2;
   return str;
}
void Service::DisplayList()
{
    cout << "----------------------------------------" << endl;
    for(unsigned int i = 0; i < Persons.size();i++){
        cout << Persons[i].Name << " ";
        cout << Persons[i].Byear <<" ";
        cout << Persons[i].Sex <<" ";
        cout << Persons[i].Dyear << endl;
        cout << "----------------------------------------" << endl;
    }
}
void Service::Search(string str){
    if(str == ",")
    {
        cout << "Invalid choice!" << endl;
        return;
    }
    for(unsigned int i = 0; i < service.size(); i++){
        if(service[i].find(str) != string::npos)
        {
            cout << "----------------------------------------" << endl;
            cout << Persons[i].Name << " ";
            cout << Persons[i].Byear <<" ";
            cout << Persons[i].Sex <<" ";
            cout << Persons[i].Dyear << endl;
        }
    }
}

/*
void Service::SortByName()
{
    sort(Persons.begin(), Persons.end());
    DisplayList();
}
void Service::SortByYear()
{
   int j;

   for (unsigned int i = 0; i < Persons.size(); i++){
       j = i;
       while (j > 0 && Persons[j].Byear < Persons[j-1].Byear)
       {
             swap(Persons[j],Persons[j-1]);
             j--;
       }
   }
   DisplayList();
}
void Service::SortByYearD()
{
   int j;
   for (unsigned int i = 0; i < Persons.size(); i++){
       j = i;

       while (j > 0 && Persons[j].Dyear < Persons[j-1].Dyear)
       {
           swap(Persons[j],Persons[j-1]);
           j--;
       }
   }
   DisplayList();
}
*/
