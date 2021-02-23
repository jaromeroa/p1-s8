#ifndef FELINO_H
#define FELINO_H

#include <QObject>
#include "mamifero.h"

class felino : public mamifero
{
    Q_OBJECT
public:
    explicit felino(QObject *parent = nullptr);
    void meow(){qInfo()<<"meow";}
    void speak();

signals:

public slots:
};

#endif // FELINO_H
