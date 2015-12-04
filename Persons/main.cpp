#include <iostream>
#include <QFileInfo>
#include <QString>
#include <QtSql>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "data.h"
#include "service.h"
#include "presentation.h"

using namespace std;

int main()
{
    /*
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database");
    if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        return false;
    }*/

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "Persons_db.sqlite";
    db.setDatabaseName(dbName);

    db.open();

    QSqlQuery query(db);

    bool ok = db.open();

    if(ok)
    {
      QSqlQuery query("dbName");
      while (query.next())
      {
        QString country = query.value(0).toString();
        qWarning() << country;
      }
    }
    query.prepare("SELECT * FROM Persons_db");
    query.bindValue("Name", QString::fromStdString("*"));
    query.bindValue("Gender", QString::fromStdString("*"));
    query.bindValue("Born", QString::fromStdString("*"));
    query.bindValue("Died", QString::fromStdString("*"));
    query.exec();

    while(query.next())
    {
        // qDebug() << query.lastQuery();
        // int id = query.value(0).toUInt();
        string nafn = query.value("Name").toString().toStdString();
        string gender = query.value("Gender").toString().toStdString();
        int born = query.value("Born").toUInt();
        int died = query.value("Died").toUInt();

        cout << "Name: " << nafn << " " << "Gender: " << gender << " " << "Born: " << born
             << " " << "Died: " << died  << " " << endl;
    }

    cout << endl << "##### THE END #####" << endl;


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



