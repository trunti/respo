#include <iostream>
#include "data.h"
#include "service.h"
#include "presentation.h"

using namespace std;

int main()
{
    vector<string> Transfer;
    string str;

    Data data;
    data.readFile();
    data.copyVector(Transfer);

    Service serv;
    serv.setServiceVector(Transfer);
    serv.MakeSplitVec();

    Presentation present;
    do{
    int number = present.Choice();
    present.Redirect(number,serv,str);
    if(number == 1){
        data.writeFile(str);
    }
    }while(1<2);
    return 0;
}


