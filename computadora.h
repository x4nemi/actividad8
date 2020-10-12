#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

using namespace std;

class Computadora{
    private:
        string nombre;
        string SO;        
        string procesador;
        float RAM;
    public:
        Computadora();
        Computadora(const string &nombre, const string &SO, const string &procesador, float RAM);

        ///Setters
        void setNombre(const string &n);
        void setSO(const string &s);
        void setProcesador(const string &p);
        void setRAM(float r);

        //Getters
        string getNombre();
        string getSO();
        string getProcesador();
        float getRAM();

};

#endif