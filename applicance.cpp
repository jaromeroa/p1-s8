#include "applicance.h"

applicance::applicance(QObject *parent) : QObject(parent) //NO es necesario al ser virtual sus metodos , congelador (), microondas (), tostadora ()
{

}
bool applicance::congelado(){
    return true;
}
bool applicance::cocinado(){
    return true;
}
bool applicance::tostado(){
    return true;
}
