#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    typedef struct produto
    {
        int id;
        float preco;
    }Produto;

    Produto *produtos;
    produtos = (produto*)malloc(5*sizeof(produto));
    int ids[] = {1, 2, 3, 4, 5};
    float precos[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    for(int i = 0; i < 5; i++){
        Produto p;
        p.id = ids[i];
        p.preco = precos[i];
        produtos[i] = p;
    }
    int id, qtd;
    scanf("%d %d", &id, &qtd);
    printf("Total: R$ %.2f\n", qtd*produtos[id-1].preco);
}
