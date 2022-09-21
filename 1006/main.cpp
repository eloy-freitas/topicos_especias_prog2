#include <iostream>


int main(int argc, char *argv[]){
    double A = 0, B = 0, C = 0, MEDIA = 0;
    const double PA = 2, PB = 3, PC = 5;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    MEDIA = ((A*PA) + (B*PB) + (C*PC))/(PA+PB+PC);
    printf("MEDIA = %.1lf\n", MEDIA);
}
