#include "data.h"
#include "persons.h"

Data::Data()
{

}
void Data::readFile(){
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "database.sqlite";
    db.setDatabaseName(dbName);

    db.open();

    QSqlQuery query(db);
        query.bindValue("Name", QString::fromStdString("*"));
        query.bindValue("Gender", QString::fromStdString("*"));
        query.bindValue("Born", QString::fromStdString("*"));
        query.bindValue("Died", QString::fromStdString("*"));
        query.exec();

    while(query.next())
    {
        Persons.name = query.value("Name").toString().toStdString();
        Persons.gender = query.value("Gender").toString().toStdString();
        Persons.born = query.value("Born").toUInt();
        Persons.died = query.value("Died").toUInt();
    }
}

