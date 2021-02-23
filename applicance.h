#ifndef APPLICANCE_H
#define APPLICANCE_H

#include <QObject>

#include "congelador.h"
#include "microondas.h"
#include "tostadora.h"

class applicance : public QObject, public congelador, public microondas, public tostadora
{
    Q_OBJECT
public:
    explicit applicance(QObject *parent = nullptr);

signals:

public slots:

    // tostadora interface
public:
    bool tostado();

    // microondas interface
public:
    bool cocinado();

    // congelador interface
public:
    bool congelado();
};

#endif // APPLICANCE_H
