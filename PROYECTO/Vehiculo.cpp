//Otro cpp PARA unir las clases "VEHICULO" y "Servicio", y posteriormente
//unirlas al Main original...
#include "VEHICULO.h"
#include "Servicio.h"
#include <iostream>

using namespace std;


//............................................................................
void Vehiculo::agregarServicio(const Servicio& servicio) {
    servicios.push_back(servicio);
}

void Vehiculo::mostrarServicios() const {
    cout << "Servicios realizados al vehículo " << marca << " " << modelo 
    << ":\n";

    for (const auto& servicio : servicios) {
        cout << " " << servicio.getTipoServicio() << " en " <<
         servicio.getFechaServicio() << " por $" << servicio.getCosto() 
         << "\n";
    }
}