#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

#define TAM 5

class Laboratorio{
    private:
        Computadora CPU[TAM];
        int cont;
    public:
        Laboratorio();

        void agregarCPU(const Computadora &c);
        void mostrar();

        void respaldar_tabla();
        void respaldar();

        void recuperar();

        friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c){
            l.agregarCPU(c);

            return l;
        }
};

#endif 