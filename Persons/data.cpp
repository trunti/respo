#include "data.h"
#include "persons.h"

Data::Data()
{

}
void Data::readFile(){
    int c;
    cout << "enter c: ";
    cin >> c;
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "database.sqlite";
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
    if(c == 1)
            query.prepare("SELECT * FROM Persons ORDER BY Name");

        else if(c == 2)
            query.prepare("SELECT * FROM Persons ORDER BY BORN");

        else
            query.prepare("SELECT * FROM Persons");

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

        if (died == 0)
        {

            cout << "Name: " << nafn << endl << "Gender: " << gender << endl << "Born: " << born
                 << endl << "Died: Alive!" << endl << endl;
        }
        else
        {
            cout << "Name: " << nafn << endl << "Gender: " << gender << endl << "Born: " << born
                 << endl << "Died: " << died  << " " << endl << endl;
        }
    }

    cout << endl << "##### THE END #####" << endl;



    /*
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
    */
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
