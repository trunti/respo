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
    int choice = present.Choice();
    present.Redirect(choice,serv,str);
    if(choice == 1){
        data.writeFile(str);
    }
    }while(1<2);
    return 0;
}


