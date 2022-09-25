#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int distancia = 0;
    double combustivel = 0;

    cin >> distancia;
    cin >> combustivel;

    printf("%.3lf km/l\n", distancia/combustivel);
}

