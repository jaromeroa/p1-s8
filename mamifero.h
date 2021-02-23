#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <QObject>
#include "animal.h"

class mamifero : public animal
{
    Q_OBJECT
public:
    explicit mamifero(QObject *parent = nullptr);

    bool hasBackbone(){return true;}

    void speak();
signals:

public slots:
};

#endif // MAMIFERO_H
