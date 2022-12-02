#include <iostream>
#include <stack>
using namespace std;

// exercicio 10004 - Bicoloring 
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=945

int main(int argc, char *argv[]){
    int nodes, edges, n1, n2, cor = 0, i = 0;
    int **matriz;
    int *cores;
    stack<int> fila;
    bool is_bipartido;

    while(cin >> nodes){
        if (nodes != 0){
            /*preparação das variáveis*/
            cin >> edges;
            matriz = new int*[nodes];
            cores = new int[nodes];
            fila.push(0);
            cor = 0;
            is_bipartido = true;
            /*criando matriz de adjacência*/
            for(int i = 0; i < nodes; i++)
                matriz[i] = new int[nodes];

            for(int i = 0; i < nodes; i++){
                for(int j = 0; j < nodes; j++)
                    matriz[i][j] = 0;
            }
            /*criando vetor de cores*/
            for(int j = 0; j < nodes; j++)
                cores[j] = -1;
                
            /*povoando matriz de adjacência*/
            for(int i = 0; i < edges; i++){
                scanf("%d %d", &n1, &n2);
                matriz[n1][n2] = 1;
                matriz[n2][n1] = 1;
            }
            
            /*busca em largura para coloração do nos*/
            while(!fila.empty()){
                i = fila.top();
                fila.pop();
                for(int j = 0; j < nodes; j++){
                    if(matriz[i][j] == 1 && cores[j] == -1){
                        cores[j] = cor;
                        fila.push(j);
                    }
                }
                cor = (cor == 0) ? 1 : 0;
            }

            /*verifica se dois nós adjacentes possuem as mesmas cores*/
            for(int i = 0; i < nodes; i++){
                for(int j = 0; j < nodes; j++){
                    if(matriz[i][j] == 1 && cores[i] == cores[j]){
                        is_bipartido = false;
                        break;
                    }
                    if(!is_bipartido)
                        break;
                }
            }

            (is_bipartido) ? cout << "BICOLORABLE.\n" : cout << "NOT BICOLORABLE.\n";
        }
        
    }

}
