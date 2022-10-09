#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int desempenho = 12, tempo = 0, velocidade = 0;
    float litros = 0;
    // v=s/t -> s=v*t 
    // 12Km -> 1L
    // s -> x
    // x*12=s -> x=s/12

    cin >> tempo;
    cin >> velocidade;

    litros = (float)(velocidade * tempo)/desempenho;
    printf("%.3lf\n",litros);
    
}
