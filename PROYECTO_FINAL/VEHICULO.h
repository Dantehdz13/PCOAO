//Primer clase del proyecto...................................................

//Se incluye la librería
#include <iostream>

using namespace std;
//DECLARACIÓN DE LA CLASE.....................................................

class Vehiculo{
    private:
        string marca;
        string modelo;
        int año;
        string id;

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
    //Se emeplea un método (función) para obtener los datos del vehículo...
    void obtenerInfo(){
        cout << "ingresa la marca del vehículo (minúsculas): " ;
        getline(cin, marca);
        cout << "ingresa el modelo del vehículo (minúsculas): " ;
        getline(cin, modelo);
        cout << "ingresa el año del vehículo: " ;
        cin >> año;
        cin.ignore(); /*para evitar que se acumulen los datos en el siguiente
        getline()*/
        cout << "ingresa el id del vehículo (minúsculas): ";
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