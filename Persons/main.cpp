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

    return 0;
}

