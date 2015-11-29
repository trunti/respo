#include "class.h"

Class::Class()
{

}
void Class::ReadFile()
{
    vector<string> vect;
    ifstream in_stream;
    in_stream.open("Person.txt");
    if (in_stream.fail()){
        cout << "Input file opening failed.";
    }
    string next;
    while(in_stream >> next){
        vect.push_back(next);
    }
    in_stream.close();
    cout << vect[1];
}
