#ifndef MEMENTO_H
#define MEMENTO_H

#include <QObject>

class Memento : public QObject
{
    Q_OBJECT
    QString username;
    QString Password;
public:
    explicit Memento(QObject *parent = nullptr);
    Memento(const Memento &other);
    Memento(Memento &&other) noexcept;
    Memento &operator=(const Memento &other);
    Memento &operator=( Memento &&other);

    QString getUsername() const;
    void setUsername(const QString &newUsername);
    QString getPassword() const;
    void setPassword(const QString &newPassword);

signals:
};

#endif // MEMENTO_H
