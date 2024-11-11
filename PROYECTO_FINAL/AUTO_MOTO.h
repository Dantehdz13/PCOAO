//Segunda clase del proyecto(se heredan datos de la primer clase).............

//Se incluye la librería y la primer clase (archivo VEHICULO.h)
#ifndef AUTO_MOTO_H
#define AUTO_MOTO_H
#include "VEHICULO.h"
#include <iostream>

using namespace std;
//DECLARACIÓN DE LAS CLASES...................................................

//Se crea la primer clase, la de automoviles
class Auto : public Vehiculo{
    public:
    //Constructor de la clase Auto por parámetros...
    Auto(string marca, string modelo, int año, string id) 
        : Vehiculo (marca ,modelo ,año ,id){}
    //constructo por defecto..
    Auto() : Vehiculo() {}

    /*Se sobrescribe el método "getTipo" de la primer clase para mostrar que
    se trata de un auto*/
    string getTipo() const override{
        return "Auto";
    } 
};

//Básicamente lo mismo pero con motocicletas...
class Moto : public Vehiculo{
    public:
    //Constructor de la clase Moto...
    Moto(string marca, string modelo, int año, string id)
    : Vehiculo (marca ,modelo ,año ,id){}
    //Constructor por defecto...
    Moto() : Vehiculo() {}

    //Igualmente se sobrescribe el método "getTipo" (logicamente con moto)...
    string getTipo() const override{
        return "Moto";
    }
};


#endif