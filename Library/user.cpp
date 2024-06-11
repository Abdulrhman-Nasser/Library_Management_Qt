#include "user.h"

QString User::getName() const
{
    return name;
}

void User::setName(const QString &newName)
{
    name = newName;
}

qint32 User::getPass() const
{
    return pass;
}

void User::setPass(const qint32 &newPass)
{
    pass = newPass;
}

QString User::getAuth() const
{
    return auth;
}

void User::setAuth(const QString &newAuth)
{
    auth = newAuth;
}

User::User(QString n, qint32 p, QString a, QObject *parent)
    : name(n),pass(p),auth(a),QObject{parent}
{}

bool User::CheckUser(QString name, qint32 pass)
{
    if(this->name == name && this->pass == pass && this -> auth == auth)
    {
        return true;
    }
    return false;
}
User::User(const User &other)
    : name(other.getName()), pass(other.getPass()), auth(other.getAuth()) {}

User::User(User &&other)
    : name(std::move(other.getName())), pass(std::move(other.getPass())), auth(std::move(other.getAuth())) {

}

User& User::operator=(const User &other) {
    if (this != &other) {
        name = other.getName();
        pass = other.getPass();
        auth = other.getAuth();
    }
    return *this;
}
