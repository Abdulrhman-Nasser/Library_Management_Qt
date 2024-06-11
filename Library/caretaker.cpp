#include "caretaker.h"

CareTaker::CareTaker(QObject *parent)
    : QObject{parent}
{}

void CareTaker::DeleteLast()
{
    if(!saves.isEmpty())
    {
        saves.pop_back();
    }
}

void CareTaker::Save(QString name, QString pass)
{
    Memento mem;
    mem.setUsername(name);
    mem.setPassword(pass);
    saves.push_back(mem);
}

Memento CareTaker::Load()
{
    Memento mem;
    if(!saves.isEmpty())
    {
        mem=saves.back();
    }
    else
    {
        mem.setUsername("");
        mem.setPassword("");
    }
    return mem;
}
