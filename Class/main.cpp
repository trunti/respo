#include "class.h"
#include <iostream>

using namespace std;


int main()
{
    int number;
    Class klass;
    klass.ReadFile();
    klass.DisplayList();
    cin >> number;
    cout << number;
    return 0;
}
