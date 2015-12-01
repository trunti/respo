#include <iostream>
#include "data.h"
#include "service.h"

using namespace std;

int main()
{
    Service serv;
    Data data;
    string str;
    cin >> str;
    data.readFile();
    vector<string> Transfer;
    data.copyVector(Transfer);
    serv.setServiceVector(Transfer);
    serv.MakeSplitVec();
    serv.DisplayList();
    serv.Search(str);
    serv.SortByName();

    return 0;
}

