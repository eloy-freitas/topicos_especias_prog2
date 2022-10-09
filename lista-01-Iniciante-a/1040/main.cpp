#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    float n1, n2, n3, n4, exame, media;
    int p1=2, p2=3, p3=4, p4=1;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media=((n1*p1)+(n2*p2)+(n3*p3)+(n4*p4))/(p1+p2+p3+p4);
    printf("Media: %.1f\n", media);
    if (media >= 7){
        printf("Aluno aprovado.\n");

    }else if (media >= 5 && media <= 6.9){
        cin >> exame;
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", exame);
        media = (media+exame)/2;
        if(media >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media);
        }else{
            printf("Aluno reprovado.\n");
        }
    }else{
        printf("Aluno reprovado.\n");
    }

}
