#include <iostream>


int main(int argc, char *argv[]){
    double A = 0, B = 0, MEDIA = 0;
    const double PA = 3.5, PB = 7.5;
    scanf("%lf", &A);
    scanf("%lf", &B);
    MEDIA = ((A*PA) + (B*PB))/(PA+PB);
    printf("MEDIA = %.5lf\n", MEDIA);

}