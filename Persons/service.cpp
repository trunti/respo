#include "service.h"

Service::Service()
{

}
void Service::setServiceVector(vector<string> blah){
    service = blah;
}
void Service::tttest(){
    cout << service[2];
}
void Service::MakeSplitVec(){
        int start = 0, numb;
        Service serv;
        for(int i = 0;i < service.size();i++)
        {
            start = 0;
            serv.Name = findsubstr(numb,start,i,service);
            serv.Sex = findsubstr(numb,start,i,service);
            serv.Byear = findsubstr(numb,start,i,service);
            serv.Dyear = findsubstr(numb,start,i,service);

        }
}
string Service::findsubstr(int &numb,int &start,const int i,vector<string> service){
   numb = service[i].find(',',start);
   string str = service[i].substr(start,numb-start);
   start = numb + 2;
   return str;
}
/*void Service::blahh(){
   int start = 0,numb;
   Service serv;
   for(unsigned int i = 0; i < service.size(); i++){
       start = 0;
       serv.Name = findsubstr(numb,start,i,service);
       serv.Sex = findsubstr(numb,start,i,service);
       serv.Byear = findsubstr(numb,start,i,service);
       serv.Dyear = findsubstr(numb,start,i,service);

       blah.push_back(serv);
   }
}
string Service::findsubstr(int &numb,int &start,const int i,vector<string> service){
   numb = service[i].find(',',start);
   string str = service[i].substr(start,numb-start);
   start = numb + 2;
   return str;
}
*/
