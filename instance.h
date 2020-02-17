#ifndef INSTANCE_H
#define INSTANCE_H
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

class Instance{
    private:
    int tamanho = 0, capacidade = 0;
    vector<int> demandas;
    vector<vector<int>> distancias;

    public:
    Instance(string nomeArquivo);

    int getTamanho();
};

#endif