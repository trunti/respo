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
        serv.Name = findsubstr(numb,start,i);
        serv.Sex = findsubstr(numb,start,i);
        serv.Byear = findsubstr(numb,start,i);
        serv.Dyear = findsubstr(numb,start,i);
        Persons.push_back(serv);
    }
}
string Service::findsubstr(int &numb,int &start,const int i){
   numb = service[i].find(',',start);
   string str = service[i].substr(start,numb-start);
   start = numb + 2;
   return str;
}
bool Service::CheckName(string str){
    int start,numb;
    string name;

    for(unsigned int i = 0; i < service.size(); i++){
        start = 0;
        name = findsubstr(numb,start,i);
        if(str == name){
            return false;
        }
    }
    return true;
}

void Service::DisplayList()
{
    for(unsigned int i = 0; i < Persons.size();i++){
        displayscientist(i);
    }
    cout << endl;
}
void Service::Search(string str){
    bool found = false;

    if(str == ",")
    {
        cout << "Invalid choice!" << endl;
        return;
    }
    for(unsigned int i = 0; i < service.size(); i++){
        if(service[i].find(str) != string::npos)
        {
            displayscientist(i);
            found = true;
        }
    }
    if(!found){
        cout << "Nothing found!" << endl;
    }
    cout << endl;
}
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
void Service::SortBySex(string str){
    for(unsigned int i = 0; i < Persons.size(); i++){
        if(Persons[i].Sex == str){
            displayscientist(i);
        }
    }
    cout << endl;
}
void Service::displayscientist(const int i){

    cout << "-------------------------------------------------------" << endl;
    cout << "| " << Persons[i].Name << "\t\t";

    if(Persons[i].Name.size() < 14){
        cout << "\t";
    }

    cout << Persons[i].Sex << "\t";
    cout << Persons[i].Byear << "\t";
    cout << Persons[i].Dyear;

    if(Persons[i].Dyear != "Alive"){
        cout << " ";
    }
    cout << " |" << endl;

    cout << "-------------------------------------------------------" << endl;
}
int Service::Getrandomscientist(){
    return Persons.size();
}
