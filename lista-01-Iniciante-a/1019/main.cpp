#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int entrada;
    int medidas[] = {3600, 60};
    int horas[] = {0, 0, 0};
    cin >> entrada;
    for(int i = 0; i < 2; i++){
        while (true)
        {
            if (entrada >= medidas[i]){
                entrada -= medidas[i];
                horas[i]++;
            }else{
                break;
            } 
        }
    }
    horas[2] = entrada;
    cout << horas[0] << ":" << horas[1] << ":" << horas[2] <<  endl;
}
