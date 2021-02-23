#include "canino.h"

canino::canino(QObject *parent) : mamifero(parent)
{
    qInfo()<<this<<"Constructed";
}
