#include <stdlib.h>
#include <iostream>
#include <fstream>

#include "instance.h"

using namespace std;

int main (int argc, char *argv[]){
    
    Instance instancia(argv[1]);

    int vmp = instancia.VMP();

    cout << "Distancia total: " << vmp << endl;

    return 0;
} 