#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include "windows.h"
#include "funciones.h"

using namespace std;

int main() {
                int cantidad;
                cout<<"************************PARCIAL 2**********************"<<endl;
                cout<< "INGRESE LA CANTIDAD DE ARCHIVOS QUE DESEA CREAR: ";
                cin >> cantidad;
                crearArchivos(cantidad);

    return 0;
}

