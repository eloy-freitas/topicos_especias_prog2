#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]){
    int valor_inteiro = 0, numero_cedulas = 6, numero_moedas = 6;
    float valor_total = 0, valor_decimal = 0;
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    float moedas[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    int cedulas_recebidas[] = {0, 0, 0, 0, 0, 0};
    int moedas_recebidas[] = {0, 0, 0, 0, 0, 0};
    cin >> valor_total;
    valor_inteiro = floor(valor_total);
    valor_decimal = valor_total - valor_inteiro;
    for (int i = 0; i < numero_cedulas; i++){
        while (true)
        {
            if (valor_inteiro >= cedulas[i]){
                valor_inteiro -= cedulas[i];
                cedulas_recebidas[i]++;
            }else{
                break;
            } 
        }
    }
    valor_decimal = (valor_decimal + valor_inteiro) * 100 + .3;
    valor_decimal /= 100;
    for (int i = 0; i < numero_moedas; i++){
        while (true)
        {
            if (valor_decimal >= moedas[i]){
                valor_decimal -= moedas[i];
                moedas_recebidas[i]++;
            }else{
                break;
            } 
        }
    }
    
    cout << "NOTAS:" << endl;
    for (int i = 0; i < numero_cedulas; i++){
        printf("%d nota(s) de R$ %d.00\n", cedulas_recebidas[i], cedulas[i]);
    }
    cout << "MOEDAS:" << endl;
    for (int i = 0; i < numero_moedas; i++){
        printf("%d moeda(s) de R$ %.2lf\n", moedas_recebidas[i], moedas[i]);
    }
    
}
