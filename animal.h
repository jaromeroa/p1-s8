#ifndef ANIMAL_H // Si no esta definido
#define ANIMAL_H // Define

#include <QObject>
#include <QDebug>

class animal : public QObject
{
    Q_OBJECT
    //Parte privada
public:
    //Parte publica
    explicit animal(QObject *parent = nullptr, QString name=""); //Constructor
    //
    void speak(QString message);

    bool isAlive(){return true;}

    ~animal(); //Deconstructor

    int weight;
    QString name;
    double asKilograms();
    void test();


signals:

public slots:
};

#endif // ANIMAL_H
