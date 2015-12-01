#include <iostream>
#include "data.h"
#include "service.h"

using namespace std;

int main()
{
    Service serv;
    Data data;
    data.readFile();
    data.test();
    vector<string> blah;
    data.copyVector(blah);
    serv.setServiceVector(blah);
    serv.tttest();

    return 0;
}

