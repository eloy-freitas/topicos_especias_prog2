#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    double velociadade = 0.5;
    int input = 0, tempo = 0;
    //60min ---> 30km --> 0.5km/min 
    //0.5*30 = 15km/h
    //t = s/v 
    
    cin >> input;

    tempo = input/velociadade;
    printf("%d minutos\n", (int)tempo);
}
