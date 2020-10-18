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
    cout << left;
    cout << setw(15) << "Nombre ";
    cout << setw(20) << "Sistema Operativo ";
    cout << setw(15) << "Procesador ";
    cout << setw(5) << "RAM ";
    cout << endl;
    for(i = 0; i < cont; i++){
        c = CPU[i];
        cout << c;
        /*cout << "Computadora " << i + 1 << endl;
        cout << "Nombre del equipo: " << c.getNombre() << endl;
        cout << "Sistema Operativo: " << c.getSO() << endl;
        cout << "Procesador: " << c.getProcesador() << endl;
        cout << "Memoria RAM: " << c.getRAM() << endl << endl;*/
    }
}

void Laboratorio::respaldar_tabla(){
    Computadora c;
    ofstream archivo("computadoras.txt");

    if(archivo.is_open()){
        archivo << left;
        archivo << setw(15) << "Nombre ";
        archivo << setw(20) << "Sistema Operativo ";
        archivo << setw(15) << "Procesador ";
        archivo << setw(5) << "RAM ";
        archivo << endl;
        for(size_t i = 0; i < cont; i++){
            c = CPU[i];
            archivo << c;
        }
    }

    archivo.close();
}