#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int valor;
    int V[3];
    int entrada[3];
    for(int i=0; i < 3; i++){
        cin >> valor;
        V[i] = valor;
        entrada[i] = valor;
    }

    int min, aux;
    for(int i=0; i<3;i++){
        min = i;
        for(int j=i+1; j<3;j++){
            if (V[j] < V[min])
                min = j;
        }
        if(V[i] != V[min]){
            aux = V[i];
            V[i] = V[min];
            V[min] = aux;
        }
    }  
    
    for(int i=0; i<3;i++){
        cout << V[i] << endl;
    }
    printf("\n");
    for(int i=0; i<3;i++){
        cout << entrada[i] << endl;
    }
}
