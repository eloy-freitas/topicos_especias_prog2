#include <iostream>
using namespace std;

void soma(int* numerador, int* denominador, int* result){
    result[0] = numerador[0]*denominador[1] + numerador[1]*denominador[0];
    result[1] = denominador[0]*denominador[1];
}

void subtracao(int* numerador, int* denominador, int* result){
    result[0] = numerador[0]*denominador[1] - numerador[1]*denominador[0];
    result[1] = denominador[0]*denominador[1];
}

void multiplicacao(int* numerador, int* denominador, int* result){
    result[0] = numerador[0]*numerador[1];
    result[1] = denominador[0]*denominador[1];
}

void divisao(int* numerador, int* denominador, int* result){
    result[0] = numerador[0]*denominador[1];
    result[1] = numerador[1]*denominador[0];
}

int menor(int x, int y){
    return (x >= y) ? y : x;
}

void simplificacao(int* result){
    int aux = menor(result[0], result[1]);
    int divisor = 2;
    while (true)
    {
        
        if (result[0] % divisor == 0 && result[1] % divisor == 0){
            result[0] = result[0] / divisor;
            result[1] = result[1] / divisor;
            aux = menor(result[0], result[1]);
        }
        else{
            divisor++;
        }
            
        
        if (divisor > aux)
            break;
        
    } 
}

int main(int argc, char *argv[]){
    int n = 0;
    cin >> n;
    int numerador[2];
    int denominador[2];
    int result[2];
    
    char operacao;
    for (int i = 0; i < n; i++){
        scanf(
            "%d / %d %c %d / %d"
            , &numerador[0]
            , &denominador[0]
            , &operacao
            , &numerador[1]
            , &denominador[1]
        );
        switch (operacao)
        {
        case '+':
            soma(numerador, denominador, result);
            break;
        case '-':
            subtracao(numerador, denominador, result);
            break;
        case '*':
            multiplicacao(numerador, denominador, result);
            break;
        case '/':
            divisao(numerador, denominador, result);
            break;
        default:
            break;
        }
        printf("%d/%d = ", result[0], result[1]);
        simplificacao(result);
        printf("%d/%d\n", result[0], result[1]);
    }

}
