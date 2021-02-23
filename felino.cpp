#include "felino.h"

felino::felino(QObject *parent) : mamifero(parent)
{
    qInfo()<<this<<"Constructed";
}

void felino::speak()
{
    qInfo()<<"Soy un felino";
}
