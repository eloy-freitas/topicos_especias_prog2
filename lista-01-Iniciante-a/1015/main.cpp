#include <iostream>
#include <math.h>
using namespace std;

void distancia(double *x, double *y){
    double distancia = sqrt(pow(y[0] - x[0], 2) + pow(y[1] - x[1], 2));
    printf("%.4lf\n", distancia);
}

int main(int argc, char *argv[]){
    const int SIZE = 2;
    double x[SIZE], y[SIZE];

    scanf("%lf %lf", &x[0], &x[1]);
    scanf("%lf %lf", &y[0], &y[1]);
    
    distancia(x, y);
}
