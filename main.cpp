#include "laboratorio.h"

using namespace std;

int main(){
    Computadora c01 = Computadora("Ruby", "Linux", "Pentium", 8);
    Computadora c02 = Computadora("HPdeXimena", "Windows", "Intel i3", 4);

    Laboratorio tics;
    tics.agregarCPU(c01);
    tics.agregarCPU(c02);
    int i = 0;
    for(i = 0; i < 10; i++) cout << "=";

    tics.mostrar();

    return 0;
}