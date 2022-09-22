#include <iostream>
#include <math.h>       

int main(int argc, char *argv[]){
    const double n = 3.14159;
    double raio = 0, area = 0;
    scanf("%lf", &raio);
    area = n * pow(raio,2);
    printf("A=%.4lf\n", area);

}