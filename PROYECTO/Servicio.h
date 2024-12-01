//Última clase del proyecto...................................................

//Se incluye la librería y la clase anterior (AUTO_MOTO.h)
#ifndef Servicio_H
#define Servicio_H
#include <iostream>

using namespace std;
//DECLARACIÓN DE CLASE........................................................
class Servicio {
protected:
    string tipoServicio;
    string fechaServicio;
    float costo;

public:
    Servicio(string tipo, string fecha, double costo)
        : tipoServicio(tipo), fechaServicio(fecha), costo(costo) {}

    string getTipoServicio() const{ 
        return tipoServicio; 
        }
    string getFechaServicio() const{ 
        return fechaServicio; 
        }
    float getCosto() const{ 
        return costo; 
        }
};


#endif
