//IDEA GENERAL DEL PROYECTO: GESTIÓN DE TUS VEHÍCULOS
//Hernández Ramírez Dante-A01668070
//Proyecto iniciado el dia 8 de Noviembre del 2024
//............................................................................

/*Inclusión de librerías... Junto con todas las clases externas
que van a estar presentes en el proyecto*/
#include "AUTO_MOTO.h"


#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
//............................................................................

//Se inicia la función main...
int main(){

//Se crea el primer objeto (o el vehículo) para usar en la función VEHICULO...
    Auto vehiculo1;
    vehiculo1.obtenerInfo();
    cout << "Tipo de vehículo: " << vehiculo1.getTipo() << endl;
    cout << "Marca: " << vehiculo1.getMarca() << endl;
    cout << "Modelo: " << vehiculo1.getModelo() << endl;
    cout << "Año: " << vehiculo1.getAño() << endl;
    cout << "ID: " << vehiculo1.getId() << endl;


return (0);    
}