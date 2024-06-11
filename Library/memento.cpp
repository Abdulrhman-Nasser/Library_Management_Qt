#include "memento.h"

QString Memento::getUsername() const
{
    return username;
}

void Memento::setUsername(const QString &newUsername)
{
    username = newUsername;
}

QString Memento::getPassword() const
{
    return Password;
}

void Memento::setPassword(const QString &newPassword)
{
    Password = newPassword;
}

Memento::Memento(QObject *parent)
    : QObject{parent}
{}


// Copy constructor
Memento::Memento(const Memento &other)
    : QObject{other.parent()}, username{other.getUsername()}, Password{other.getPassword()}
{}

// Move constructor
Memento::Memento(Memento &&other) noexcept
    : QObject{other.parent()}, username{std::move(other.getUsername())}, Password{std::move(other.getPassword())}
{
    other.setParent(nullptr);
}

// Copy assignment operator
Memento &Memento::operator=(const Memento &other)
{
    if (this != &other) {
        this->username = other.getUsername();
        this->Password = other.getPassword();
        this->setParent(other.parent());
    }
    return *this;
}

// Move assignment operator
Memento &Memento::operator=( Memento &&other)
{
    if (this != &other) {
        this->username = std::move(other.getUsername());
        this->Password = std::move(other.getPassword());
        this->setParent(other.parent());
        other.setParent(nullptr);
    }
    return *this;
}

