#ifndef JSON_H
#define JSON_H

#include <QObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVector>
#include <user.h>
#include <QFile>
#include <books.h>
class Json : public QObject
{
    Q_OBJECT
    QString path;
public:
    explicit Json(QObject *parent = nullptr);
    QVector<User> readFile();
    QVector<Books> readBooks();
    void addBook(QString title, QString category, QString barcode, QString author);
    void deleteBook(QString bar);
    void setPath(const QString &newPath);

signals:
};

#endif // JSON_H
