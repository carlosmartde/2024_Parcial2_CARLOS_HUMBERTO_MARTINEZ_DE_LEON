//
// Created by carlo on 4/05/2024.
//

#ifndef INC_2024_PARCIAL2_CARLOS_HUMBERTO_MARTINEZ_DE_LEON_FUNCIONES_H
#define INC_2024_PARCIAL2_CARLOS_HUMBERTO_MARTINEZ_DE_LEON_FUNCIONES_H

#endif //INC_2024_PARCIAL2_CARLOS_HUMBERTO_MARTINEZ_DE_LEON_FUNCIONES_H

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include "windows.h"

using namespace std;



void agregarTexto(){
    cout << "Agregando texto..." << endl;
}

int contarArchivosDeDirectorio(){
    WIN32_FIND_DATA findFileData;
    HANDLE          hFind;
    int cantidadDeArchivos=0;
    hFind = FindFirstFile("C:\\Users\\carlo\\Desktop\\PARCIAL 2\\par\\*", &findFileData);

    if (hFind == INVALID_HANDLE_VALUE){
        cout << "Ruta incorrecta" << endl;
    }else{
        while (FindNextFile(hFind, &findFileData)!=0){
            cantidadDeArchivos=cantidadDeArchivos+1;
        }
    }
    return cantidadDeArchivos-1;
}

int contarArchivosDeDirectorio2(){
    WIN32_FIND_DATA findFileData;
    HANDLE          hFind;
    int cantidadDeArchivos=0;
    hFind = FindFirstFile("C:\\Users\\carlo\\Desktop\\PARCIAL 2\\impar\\*", &findFileData);

    if (hFind == INVALID_HANDLE_VALUE){
        cout << "Ruta incorrecta" << endl;
    }else{
        while (FindNextFile(hFind, &findFileData)!=0){
            cantidadDeArchivos=cantidadDeArchivos+1;
        }
    }
    return cantidadDeArchivos-1;
}

void crearArchivos(int cantidad){
    string nombreArchivo = "file";
    if (cantidad % 2 == 0){
        cout << "Cantidad de Archivos par" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:\\Users\\carlo\\Desktop\\PARCIAL 2\\par\\" + nombreArchivo + to_string(i + 1) + ".txt");
            agregarTexto();
            for (int j = 0; j < i+1; ++j) {
                file << "PARCIAL 2" << endl;
            }
            file.close();
        }
        cout << cantidad << " Archivos creados con Exito" << endl;
        contarArchivosDeDirectorio();
    }else{
        cout << "Cantidad de Archivos impar" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:\\Users\\carlo\\Desktop\\PARCIAL 2\\impar\\" + nombreArchivo + to_string(i + 1) + ".txt");
            agregarTexto();
            for (int j = 0; j < i+1; ++j) {
                file << "PARCIAL 2" << endl;
            }
            file.close();
        }
        cout << cantidad << " Archivos creados con Exito" << endl;
        contarArchivosDeDirectorio2();
    }
}