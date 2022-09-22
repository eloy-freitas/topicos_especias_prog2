#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    struct Produto{
        int id = 0;
        int qtd = 0;
        double valor_unitario = 0;
    };

    Produto p1;
    Produto p2;
    double total = 0;

    scanf("%d %d %lf", &p1.id, &p1.qtd, &p1.valor_unitario);
    scanf("%d %d %lf", &p2.id, &p2.qtd, &p2.valor_unitario);

    total = (p1.qtd * p1.valor_unitario) + (p2.qtd * p2.valor_unitario);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
}
