#include "computadora.h"

using namespace std;

int main(){
    Computadora miCPU = Computadora("Ruby", "Linux", "Pentium", 500.0);

    cout << "Nombre de la computadora: " << miCPU.getNombre() << endl;

    return 0;
}