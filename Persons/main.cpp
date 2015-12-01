#include <iostream>
#include "data.h"
#include "service.h"

using namespace std;

int main()
{
    Service serv;
    Data data;
    data.readFile();
    vector<string> MainVector;
    data.copyVector(MainVector);
    serv.setServiceVector(MainVector);
    serv.MakeSplitVec();
    serv.DisplayList();

    return 0;
}

