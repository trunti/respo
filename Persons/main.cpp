#include <iostream>
#include "data.h"
#include "service.h"
#include "presentation.h"

using namespace std;

int main()
{
    vector<string> Transfer;

    Data data;
    data.readFile();
    data.copyVector(Transfer);

    Service serv;
    serv.setServiceVector(Transfer);
    serv.MakeSplitVec();

    Presentation present;
    present.Main();

    return 0;
}

