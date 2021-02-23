#include <QCoreApplication> //Si no son comillas es que esta en el path del equipo
#include <QDebug>
//#include "animal.h" //Si hay comillas es que eso esta dentro del proyecto
#include "felino.h"
//#include "canino.h"

#include "applicance.h"

/*void test(animal &machine){
    machine.test();
}


void makeAnimals(QObject* parent){
    animal mine(parent, "my animal");
    mine.weight=3;

    test(mine);
}*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //animal cat;
    //animal dog;
    //cat.speak("meaw");

    //makeAnimals(&a);

    //al heredar de felino y canino ambos vienen de mamifero y a su vez de animal, por eso lo reconoce
    //animal test;

    felino gato;
    gato.speak();
    //canino perro;

    applicance Kitchen5000;
    qInfo()<<"Can cook:"<<Kitchen5000.cocinado();
    qInfo()<<"Can cook:"<<Kitchen5000.tostado();
    qInfo()<<"Can cook:"<<Kitchen5000.congelado();

    return a.exec();
}
