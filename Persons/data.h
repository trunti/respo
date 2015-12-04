#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QFileInfo>
#include <QString>

using namespace std;

class Data{
public:
    Data();
    void readFile();
    void writeFile(string str);
    void copyVector(vector<string> &vect);
protected:
    vector<string> data;
};

#endif // DATA_H
