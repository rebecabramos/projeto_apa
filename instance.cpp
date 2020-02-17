#include "instance.h"

Instance::Instance(string nomeArquivo){
    ifstream arquivo;

    arquivo.open(nomeArquivo, ios::in);

    arquivo >> tamanho;
    cout << "Tamanho: " << tamanho << endl << endl;

    arquivo >> capacidade;
    cout << "Capacidade: " << capacidade << endl << endl;
    
    demandas = vector<int>(tamanho);
    distancias = vector<vector<int>>(tamanho);

    for(int i = 0; i < tamanho; i++){
        distancias[i] = vector<int>(tamanho);
    }
    
    cout << "Demandas: " << endl;
    for (int i=0; i<tamanho; i++){
        arquivo >> demandas[i];
        cout << demandas[i] << " ";
    }
    cout << endl << endl;

    cout << "Distancias:" << endl;
    for (int i=0; i<tamanho; i++){
        for (int j=0; j<tamanho; j++){
            arquivo >> distancias[i][j];
            cout << distancias[i][j] << " ";
        }
        cout << endl;
    }

    arquivo.close();
}

int Instance::getTamanho(){
    return this->tamanho;
}