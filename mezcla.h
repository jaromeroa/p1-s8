#ifndef MEZCLA_H
#define MEZCLA_H

#include <QObject>
#include "canino.h"
#include "felino.h"

class mezcla : public canino// No se puede hacer asi, felino
{
    Q_OBJECT
public:
    explicit mezcla(QObject *parent = nullptr);

signals:

public slots:
};

#endif // MEZCLA_H
