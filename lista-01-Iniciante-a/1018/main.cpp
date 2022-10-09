#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int valor = 0, aux = 0, numero_cedulas = 7;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    int cedulas_recebidas[] = {0, 0, 0, 0, 0, 0, 0};
    cin >> valor;
    aux = valor;
    cout << valor << endl;
    for (int i = 0; i < numero_cedulas; i++){
        while (true)
        {
            if (aux >= cedulas[i]){
                aux -= cedulas[i];
                cedulas_recebidas[i]++;
            }else{
                break;
            } 
        }
    }
    for (int i = 0; i < numero_cedulas; i++){
        cout << cedulas_recebidas[i] << " nota(s) de R$ " << cedulas[i] << ",00" << endl;
    }
    
}
