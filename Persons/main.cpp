#include <iostream>

#include <QFileInfo>
#include <QtSql>
#include "data.h"
#include "service.h"
#include "presentation.h"

using namespace std;

int main()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "Persons_db.sqlite";
    db.setDatabaseName(dbName);

    db.open();

    QSqlQuery query(db);

/*
    string str;

    Data data;
    data.readFile();
    data.copyVector(Transfer);

    Service serv;
    serv.setServiceVector(Transfer);
    serv.MakeSplitVec();

    Presentation present;

    do{
    int choice = present.Choice();
    present.Redirect(choice,serv,str);
    if(choice == 1 && str != ""){
        data.writeFile(str);
        serv.AddName(str);
        serv.MakeSplitVec();
    }
    }while(present.Continue());*/
    return 0;
}


