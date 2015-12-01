#include <iostream>
#include "data.h"
#include "service.h"

using namespace std;

int main()
{
    Service serv;
    Data data;
    data.readFile();
    vector<string> Transfer;
    data.copyVector(Transfer);
    serv.setServiceVector(Transfer);
    serv.MakeSplitVec();
    serv.DisplayList();

    return 0;
}

