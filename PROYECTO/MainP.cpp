//IDEA GENERAL DEL PROYECTO: GESTIÓN DE TUS VEHÍCULOS
//Hernández Ramírez Dante-A01668070
//Proyecto iniciado el dia 8 de Noviembre del 2024
//............................................................................

/*Inclusión de librerías... Junto con todas las clases externas
que van a estar presentes en el proyecto*/
#include "AUTO_MOTO.h"
#include "Servicio.h"

#include <iostream>

using namespace std;
//............................................................................

//Se inicia la función main...
int main(){

//Se crea el primer objeto (o el vehículo) para usar en la función VEHICULO...
    Auto vehiculo1;
    vehiculo1.obtenerInfo();
    vehiculo1.obtenerTipoMotor();

    cout << "Tipo de vehículo: " << vehiculo1.getTipo() << endl;
    cout << "Marca: " << vehiculo1.getMarca() << endl;
    cout << "Modelo: " << vehiculo1.getModelo() << endl;
    cout << "Año: " << vehiculo1.getAño() << endl;
    cout << "ID: " << vehiculo1.getId() << endl;
    cout << "Tipo de Motor: " << vehiculo1.getTipoMotor() << endl;
 
    //Se definen los servicios...
    Servicio cambioAceite("Cambio de aceite", "2024-11-01", 500.0);
    Servicio revisionFrenos("Revisión de frenos", "2024-11-10", 1200.0);

    vehiculo1.agregarServicio(cambioAceite);
    vehiculo1.agregarServicio(revisionFrenos);

    vehiculo1.mostrarServicios();
//............................................................................
    Moto vehiculo2;
    vehiculo2.obtenerInfo();
    vehiculo2.obtenerCilindraje();

    cout << "Tipo de vehículo: " << vehiculo2.getTipo() << endl;
    cout << "Marca: " << vehiculo2.getMarca() << endl;
    cout << "Modelo: " << vehiculo2.getModelo() << endl;
    cout << "Año: " << vehiculo2.getAño() << endl;
    cout << "ID: " << vehiculo2.getId() << endl;
    cout << "Tipo de cilindraje: " << vehiculo2.getCilindraje() << endl;

return (0);    
}
