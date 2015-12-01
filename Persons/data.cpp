#include "data.h"

Data::Data()
{

}
void Data::readFile(){
    ifstream in_stream;
    in_stream.open("Person.txt");
    if (in_stream.fail())
    {
        cout << "Input file opening failed.";
    }
    string getperson;
    while(getline(in_stream,getperson))
    {
        data.push_back(getperson);
    }
    in_stream.close();
}
void Data::writeFile(string str){
    ofstream out_stream;
    out_stream.open("Person.txt", ios::app);
    out_stream << endl << str;
    out_stream.close();
}
void Data::copyVector(vector<string> &vect){
    for(unsigned int i = 0; i < data.size(); i++){
        vect.push_back(data[i]);

    }
}
