#include <stdlib.h>
#include <iostream>
#include <fstream>

#include "instance.h"

using namespace std;

int main (int argc, char *argv[]){
    Instance instancia(argv[1]);

    int tam = instancia.getTamanho();

    cout << "tamanho: " << tam << endl;
    // ifstream arquivo;

    // arquivo.open (argv[1], ios::in);
    
    // int tamanho = 0, capacidade = 0;

    // arquivo >> tamanho;
    // cout << "Tamanho: " << tamanho << endl << endl;

    // arquivo >> capacidade;
    // cout << "Capacidade: " << capacidade << endl << endl;

    // int demandas[tamanho];
    // int distancias[tamanho][tamanho];

    // cout << "Demandas: " << endl;
    // for (int i=0; i<tamanho; i++){
    //     arquivo >> demandas[i];
    //     cout << demandas[i] << " ";
    // }
    // cout << endl << endl;

    // cout << "Distancias:" << endl;
    // for (int i=0; i<tamanho; i++){
    //     for (int j=0; j<tamanho; j++){
    //         arquivo >> distancias[i][j];
    //         cout << distancias[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
} 