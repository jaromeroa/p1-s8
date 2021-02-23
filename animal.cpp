#include "animal.h"
//NO hace falta incluir aqui QDebug ni nada porque lo tiene la interfaz animal.h
animal::animal(QObject *parent, QString name) : QObject(parent) //Cuando se crea - Tambien se crea el "this" que es como una referencia a si mismo
{
    this->name=name;
    qInfo()<<this<<name<<"constructed";
}

void animal::speak(QString message)
{
    qDebug()<<message;
}

animal::~animal() //Cuando se destruye
{
    qInfo()<<this<<name<<"deconstructed";
}

double animal::asKilograms()
{
    return this->weight*0.453592;
}

void animal::test()
{
    qInfo()<<this<<name<<asKilograms();
}
