#include "mamifero.h"

mamifero::mamifero(QObject *parent) : animal(parent)
{
    qInfo()<<this<<"Constructed";
}

void mamifero::speak()
{
    qInfo()<<"Soy un mamifero";
}
