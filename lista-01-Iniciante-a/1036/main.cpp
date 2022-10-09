#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]){
    float a, b, c, delta, r1, r2;
    scanf("%f %f %f", &a, &b, &c);
    //B*B -4*A*C
    delta = pow(b,2)-(4*a*c);
    if (delta < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }else{
        delta = sqrt(delta);
        r1 = (-b + delta)/(2*a);
        r2 = (-b - delta)/(2*a);
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }
}
