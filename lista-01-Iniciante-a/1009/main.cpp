#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){
    string nome = "";
    double salario = 0, total_vendas = 0;
    const double comissao = 0.15;

    cin >> nome;
    cin >> salario;
    cin >> total_vendas;

    salario = salario + (total_vendas * comissao);

    printf("TOTAL = R$ %.2lf\n", salario);
}
