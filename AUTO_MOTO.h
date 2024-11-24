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

    protected:
    string tipoMotor;

    public:
    //Constructor de la clase Auto por parámetros...
    Auto(string marca, string modelo, int año, string id, string tipoMotor) 
        : Vehiculo (marca ,modelo ,año ,id), tipoMotor(tipoMotor){}
    //constructo por defecto..
    Auto() : Vehiculo() {
        tipoMotor = "";
    }

    /*Se sobrescribe el método "getTipo" de la primer clase para mostrar que
    se trata de un auto*/
    string getTipo() const override{
        return "Auto";
    } 

    // Se pide el tipo de Motor...
    void obtenerTipoMotor(){
        cout << "Ingresa el tipo de motor (Eléctrico o de Gas): ";
        getline(cin, tipoMotor);
        cin.ignore();
    }
    // Getter del tipo de motor...
    string getTipoMotor(){
        return tipoMotor;
    };
};
//............................................................................

//Básicamente lo mismo pero con motocicletas...
class Moto : public Vehiculo{

    protected:
    string cilindraje;

    public:
    //Constructor de la clase Moto...
    Moto(string marca, string modelo, int año, string id, string cilindraje)
    : Vehiculo (marca ,modelo ,año ,id), cilindraje(cilindraje){}
    //Constructor por defecto...
    Moto() : Vehiculo() {
        cilindraje = "";
    }

    //Igualmente se sobrescribe el método "getTipo" (logicamente con moto)...
    string getTipo() const override{
        return "Moto";
    }

    void obtenerCilindraje(){
        cout << "Ingresa el tipo de cilindraje de tu moto: ";
        getline(cin, cilindraje);
        cin.ignore();
    }
    //Getter...
    string getCilindraje(){
        return cilindraje;
    };
};

#endif