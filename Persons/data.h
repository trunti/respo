#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Data
{
public:
    Data();
    void readFile();
    void writeFile(string str);
    void test();
    void copyVector(vector<string> vect);
private:
    vector<string> data;
};

#endif // DATA_H
