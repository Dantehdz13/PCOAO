//Última clase del proyecto...................................................

//Se incluye la librería y la clase anterior (AUTO_MOTO.h)
#ifndef Servicio_H
#define Servicio_H
#include <iostream>

using namespace std;
//DECLARACIÓN DE CLASE........................................................
class Servicio {
private:
    string tipoServicio;
    string fechaServicio;
    float costo;

public:
    Servicio(std::string tipo, std::string fecha, double costo)
        : tipoServicio(tipo), fechaServicio(fecha), costo(costo) {}

    std::string getTipoServicio() const { return tipoServicio; }
    std::string getFechaServicio() const { return fechaServicio; }
    float getCosto() const { return costo; }
};


#endif