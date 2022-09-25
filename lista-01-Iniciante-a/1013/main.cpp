#include <iostream>
using namespace std;

int maiorAB(double a, double b){
    int result = (int)(a+b+abs(a-b))/2;
    
    return result;
}

int main(int argc, char *argv[]){

    int a = 0, b = 0, c = 0;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d eh o maior\n", maiorAB(a, maiorAB(b, c)));


}   
