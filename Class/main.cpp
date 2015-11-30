#include "class.h"
#include "class2.h"
#include <iostream>

using namespace std;


int main()
{
    Class klass;
    Class klass2;
    klass.InputToFile();
    klass.ReadFile();
    klass2.howToSort();
    klass2.Sort();
    klass.DisplayList();
    return 0;
}
