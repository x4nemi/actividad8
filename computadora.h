#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>

using namespace std;

class Computadora{
    private:
        string nombre;
        string SO;        
        string procesador;
        int RAM;
    public:
        Computadora();
        Computadora(const string &nombre, const string &SO, const string &procesador, float RAM);

        ///Setters
        void setNombre(const string &n);
        void setSO(const string &s);
        void setProcesador(const string &p);
        void setRAM(int r);

        //Getters
        string getNombre();
        string getSO();
        string getProcesador();
        float getRAM();

        friend ostream& operator<<(ostream &out, const Computadora &p){
            out << p.nombre << endl;
            out << p.procesador << endl;
            out << p.RAM << endl;
            out << p.SO << endl;

            return out;
        }
};

#endif