#ifndef USER_H
#define USER_H

#include <QObject>
#include <utility>
class User : public QObject
{
    Q_OBJECT
    QString name;
    qint32 pass;
    QString auth;
public:
    explicit User(QString,qint32,QString,QObject *parent = nullptr);
    User(User &&other);
    User(const User &other);
    User& operator=(const User &other);
    bool CheckUser(QString name,qint32 pass);
    QString getName() const;
    void setName(const QString &newName);
    qint32 getPass() const;
    void setPass(const qint32 &newPass);
    QString getAuth() const;
    void setAuth(const QString &newAuth);

signals:
};

#endif // USER_H
