#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14159;

void triangulo(double a, double c){
    printf("TRIANGULO: %.3lf\n", (a*c)/2);
}

void circulo(double c){
    printf("CIRCULO: %.3lf\n", (PI*c*c));
}

void trapezio(double a, double b, double c){
    printf("TRAPEZIO: %.3lf\n", ((a+b)*c)/2);
}

void quadrado(double b){
    printf("QUADRADO: %.3lf\n", b*b);
}

void retangulo(double a,double b){
    printf("RETANGULO: %.3lf\n", a*b);
}


int main(int argc, char *argv[]){
    double a = 0, b = 0, c = 0;

    scanf("%lf %lf %lf", &a, &b, &c);

    triangulo(a,c);

    circulo(c);

    trapezio(a,b,c);

    quadrado(b);

    retangulo(a,b);

}
