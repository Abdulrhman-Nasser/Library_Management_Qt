#include "json.h"

void Json::setPath(const QString &newPath)
{
    path = newPath;
}

Json::Json(QObject *parent)
    :QObject{parent}
{}

QVector<User> Json::readFile()
{
    QVector <User> dataBase;
    QFile file(path);
    if(file.open(QIODevice::ReadOnly))
    {
        QByteArray byteArray = file.readAll();
        QJsonDocument jsondoc = QJsonDocument::fromJson(byteArray);
        QJsonArray jsonarr = jsondoc.array();
        for(int i=0 ; i<jsonarr.size();i++)
        {
            QJsonObject jsonobj= jsonarr[i].toObject();
            QString name = jsonobj["UserName"].toString();
            qint32 pass = jsonobj["Password"].toInt();
            QString auth = jsonobj["Auth"].toString();
            //User temp(jsonobj["UserName"].toString(),jsonobj["Password"].toString(),jsonobj["Auth"].toString());
            dataBase.push_back(User(name,pass,auth));

        }
        file.close();
    }
    else
    {
        qDebug()<<"Cant open data base file..."<<Qt::endl;
    }
    return dataBase;
}

QVector<Books> Json::readBooks()
{
    QVector <Books> dataBase;
    QFile file(path);
    if(file.open(QIODevice::ReadOnly))
    {
        QByteArray byteArray = file.readAll();
        QJsonDocument jsondoc = QJsonDocument::fromJson(byteArray);
        QJsonArray jsonarr = jsondoc.array();
        for(int i=0 ; i<jsonarr.size();i++)
        {
            QJsonObject jsonobj= jsonarr[i].toObject();
            QString author = jsonobj["author"].toString();
            QString barcode = jsonobj["barcode"].toString();
            QString category = jsonobj["category"].toString();
            QString title = jsonobj["title"].toString();
            dataBase.push_back(Books(author,barcode,category,title));

        }
        file.close();
    }
    else
    {
        qDebug()<<"Cant open data base file..."<<Qt::endl;
    }
    return dataBase;
}

void Json::addBook(QString title, QString category, QString barcode, QString author)
{
    QVector <QJsonObject> dataBase;
    QFile file(path);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QByteArray byteArray = file.readAll();
        QJsonDocument jsondoc = QJsonDocument::fromJson(byteArray);
        QJsonArray jsonarr = jsondoc.array();
        for(int i=0 ; i<jsonarr.size();i++)
        {
            QJsonObject jsonobj= jsonarr[i].toObject();
            dataBase.push_back(jsonobj);

        }
        file.close();
    }
    else
    {
        qDebug()<<"Cant open data base file..."<<Qt::endl;
    }
    QJsonObject newObj;
    newObj["author"]=author;
    newObj["barcode"]=barcode;
    newObj["category"]=category;
    newObj["title"]=title;
    QJsonArray jsonArray;
    for(auto& vv :dataBase)
    {
        jsonArray.append(vv);
    }
    jsonArray.append(newObj);
    QFile file1(path);
    if(file1.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        file1.write(QJsonDocument(jsonArray).toJson());
        file1.close();
    }
    else
    {
        qDebug()<<"Cant open data base file..."<<Qt::endl;
    }

}

void Json::deleteBook(QString bar)
{

    QVector <QJsonObject> dataBase;
    QFile file(path);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QByteArray byteArray = file.readAll();
        QJsonDocument jsondoc = QJsonDocument::fromJson(byteArray);
        QJsonArray jsonarr = jsondoc.array();
        for(int i=0 ; i<jsonarr.size();i++)
        {
            QJsonObject jsonobj= jsonarr[i].toObject();
            dataBase.push_back(jsonobj);

        }
        file.close();
    }
    else
    {
        qDebug()<<"Cant open data base file..."<<Qt::endl;
    }
    QJsonArray jsonArray;
    for(auto& vv :dataBase)
    {
        if(vv["barcode"]!=bar)
        {
            jsonArray.append(vv);
        }

    }
    QFile file1(path);
    if(file1.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        file1.write(QJsonDocument(jsonArray).toJson());
        file1.close();
    }
    else
    {
        qDebug()<<"Cant open data base file..."<<Qt::endl;
    }
}
