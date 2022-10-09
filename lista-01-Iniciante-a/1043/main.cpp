#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    float a,b,c, result, menor1, menor2, maior;
    scanf("%f %f %f", &a, &b, &c);
    menor1 = min(a, b);
    menor2 = min(c, menor1);
    maior = max(a, max(b, c));
    if(menor1 + menor2 > maior){
        result=a+b+c;
        printf("Perimetro = %.1f\n", result);
    }else{
        result=((a+b)*c)/2;
        printf("Area = %.1f\n", result);
    }
}
