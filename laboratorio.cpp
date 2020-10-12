#include "laboratorio.h"

using namespace std;

#define TAM 5

Laboratorio::Laboratorio(){ 
    cont = 0;
}

void Laboratorio::agregarCPU(const Computadora &c){
    if(cont < TAM){
        CPU[cont++] = c;
    }

    else{
        cout << "Solo se puede almacenar " << TAM << " computadoras" << endl;
    }
}

void Laboratorio::mostrar(){
    Computadora c;
    int i;

    for(i = 0; i < cont; i++){
        c = CPU[i];
        cout << "Computadora " << i + 1 << endl;
        cout << "Nombre del equipo: " << c.getNombre() << endl;
        cout << "Sistema Operativo: " << c.getSO() << endl;
        cout << "Procesador: " << c.getProcesador() << endl;
        cout << "Memoria RAM: " << c.getRAM() << endl << endl;
    }
}