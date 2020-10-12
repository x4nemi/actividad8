#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

class Computadora{
    private:
        std::string nombre;
        std::string SO;        
        std::string procesador;
        int RAM;
    public:
        Computadora();
        Computadora(const std::string &nombre, const std::string &SO, const std::string &procesador, float RAM);

        ///Setters
        void setNombre(const std::string &n);
        void setSO(const std::string &s);
        void setProcesador(const std::string &p);
        void setRAM(int r);

        //Getters
        std::string getNombre();
        std::string getSO();
        std::string getProcesador();
        float getRAM();

};

#endif