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

int Instance::VMP(){

    int distanciaTotal = 0;
    int nrotas = 0;
    int carga = 0;
    int lugarAtual = 0;
    int visitou[tamanho] = {0};
    int prox;
    int proxaux;
    int terminou = 0;

    while(1){

        carga = capacidade;
        lugarAtual = 0;
        visitou[0] = 1;

        while(1){

            proxaux = 10000;

            for(int i = 0; i < tamanho; i++){

                if (visitou[i])
                    continue;

                if (carga < capacidade)
                    continue;

                if (distancias[lugarAtual][i] < proxaux){
                    prox = i;
                    proxaux = distancias[lugarAtual][i];
                }
            }

            if(proxaux == 10000){
                distanciaTotal += distancias[lugarAtual][0];
                nrotas++;
                break;
            }

            carga -= demandas[prox];
            distanciaTotal += proxaux;
            visitou[prox] = 1;
            lugarAtual = prox;

        }

        for(int i = 0; i < tamanho; i++){
            if(visitou[i] == 0){
                terminou = 0;
                break;
            }
            terminou = 1;
        }

        if (!terminou){
            continue;
        }

        return distanciaTotal;

    }

}