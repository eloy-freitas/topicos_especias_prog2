#include <iostream>
#include <math.h>
using namespace std;

float quadrado(float valor){
    return pow(valor, 2);
}

int main(int argc, char *argv[]){
    int tamanho = 3, min;
    bool e_equilatero = false, triangulo = false;
    float vet[3], aux;
    for(int i = 0; i < tamanho; i++)
        scanf("%f",&vet[i]);
    
    for(int i=0;i<tamanho;i++){
        min = i;
        for(int j=i+1;j<tamanho;j++){
            if(vet[j] < vet[min])
                min = j;
        }
        if(vet[min] != vet[i]){
            aux = vet[i];
            vet[i] = vet[min];
            vet[min] = aux;
        }
    }
    
    if(vet[2]>=vet[0]+vet[1]){
        cout << "NAO FORMA TRIANGULO" << endl;
        triangulo = true;
    }
    if(quadrado(vet[2])==quadrado(vet[0])+quadrado(vet[1]) && !triangulo)
        cout << "TRIANGULO RETANGULO" << endl;
    if(quadrado(vet[2])>quadrado(vet[0])+quadrado(vet[1]) && !triangulo)
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if(quadrado(vet[2])<quadrado(vet[0])+quadrado(vet[1]) && !triangulo)
        cout << "TRIANGULO ACUTANGULO" << endl;
    if(vet[0] == vet[1] && vet[0] == vet[2] && vet[1] == vet[2] && !triangulo){
        cout << "TRIANGULO EQUILATERO" << endl;
        e_equilatero = true;
    } 
    if((vet[0] == vet[1] || vet[0] == vet[2] || vet[1] == vet[2]) && !e_equilatero && !triangulo)
        cout << "TRIANGULO ISOSCELES" << endl;
}
