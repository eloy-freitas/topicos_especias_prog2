#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, char *argv[]){

    double raio = 0, volume = 0;
    const double PI = 3.14159;

    cin >> raio;

    volume = (4.0/3.0) * PI * pow(raio, 3);

    printf("VOLUME = %.3f\n", volume);

}
