//Primer clase del proyecto...................................................

//Se incluye la librería
#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <vector>
#include "Servicio.h"

using namespace std;
//DECLARACIÓN DE LA CLASE.....................................................

class Servicio;

class Vehiculo{
    private:
        string marca;
        string modelo;
        int año;
        string id;
        vector<Servicio> servicios;

    public:
    // Se declara el "constructor" con parámetros...
    Vehiculo(string marca, string modelo, int año, string id){
        marca = marca;
        modelo = modelo;
        año = año;
        id = id;

    }
    //Se declara otro, con la diferencia de ser por defecto...
    Vehiculo(){
        marca = "";
        modelo = "";
        año = 0;
        id = "";
    }
    //SOLO declaración del método para agregar un servicio...
    void agregarServicio(const Servicio & servicio);
    //SOLO declaración del método para mostrar los servicios del vehículo...
    void mostrarServicios()const;


    //Se emeplea un método (función) para obtener los datos del vehículo...
    void obtenerInfo(){
        cout << "ingresa la marca del vehículo: " ;
        getline(cin, marca);
        cout << "ingresa el modelo del vehículo: " ;
        getline(cin, modelo);
        cout << "ingresa el año del vehículo: " ;
        cin >> año;
        cin.ignore(); /*para evitar que se acumulen los datos en el siguiente
        getline()*/
        cout << "ingresa el id del vehículo: ";
        getline(cin, id);
    }
    //Se emplean "getters" para poder llegar a los atributos privados...
    string getMarca(){
        return marca;
    };

    string getModelo(){
        return modelo;
    };

    int getAño(){
        return año;
    };

    string getId(){
        return id;
    };

    /*Se usa un método "virtual"... este sirve para que sea alterado en las
    clases que derivan de esta (auto_moto por ejemplo)*/ 
    virtual string getTipo() const=0;
};
#endif