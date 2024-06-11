#ifndef CARETAKER_H
#define CARETAKER_H

#include <QObject>
#include "memento.h"
class CareTaker : public QObject
{
    Q_OBJECT
    QVector<Memento> saves;
public:
    explicit CareTaker(QObject *parent = nullptr);
    void DeleteLast();
    void Save(QString name,QString pass);
    Memento Load();

signals:
};

#endif // CARETAKER_H
