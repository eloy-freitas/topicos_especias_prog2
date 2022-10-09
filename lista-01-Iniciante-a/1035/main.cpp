#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int A, B, C, D;
    bool aceito = true;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if (!(B > C))
        aceito = false;
    if (!(D > A))
        aceito = false;
    if (!(C+D > A+B))
        aceito = false;
    if (!(C > 0 && D > 0))
        aceito = false;
    if (!(A % 2 == 0))
        aceito = false;

    (aceito)? printf("Valores aceitos\n") : printf("Valores nao aceitos\n"); 
}
