#include "laboratorio.h"

using namespace std;

int main(){
    Computadora c01 = Computadora("Ruby", "Linux", "Pentium", 8);
    Computadora c02 = Computadora("HPdeXimena", "Windows", "Intel i3", 4);

    Laboratorio tics;
    tics << c01 << c02;

    Computadora c03;
    //cin >> c03;
    //tics << c03;

    tics.mostrar();
    tics.respaldar_tabla();

    return 0;
}