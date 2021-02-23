#ifndef CANINO_H
#define CANINO_H

#include <QObject>
#include "mamifero.h"

class canino : public mamifero
{
    Q_OBJECT
public:
    explicit canino(QObject *parent = nullptr);
    void bark(){qInfo()<<"bark";}

signals:

public slots:
};

#endif // CANINO_H
