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
