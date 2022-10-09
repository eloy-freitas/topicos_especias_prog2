#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int entrada;
    int medidas[] = {365, 30};
    int idade[] = {0, 0, 0};
    cin >> entrada;
    for(int i = 0; i < 2; i++){
        while (true)
        {
            if (entrada >= medidas[i]){
                entrada -= medidas[i];
                idade[i]++;
            }else{
                break;
            } 
        }
    }
    idade[2] = entrada;
    cout << idade[0] << " ano(s)\n" << idade[1] << " mes(es)\n" << idade[2] << " dia(s)" << endl;
}
