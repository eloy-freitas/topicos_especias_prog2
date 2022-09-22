#include <iostream>
int main(int argc, char *argv[]){
    int id, horas;
    float valor_hora, pagamento = 0;
    scanf("%d", &id);
    scanf("%d", &horas);
    scanf("%f", &valor_hora);

    pagamento = horas * valor_hora;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", id, pagamento);
}
