#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    int a, b;

    scanf("%d %d", &a, &b);

    if(max(a,b) % min(a,b) == 0)
        cout << "Sao Multiplos" << endl;
    else
        cout << "Nao sao Multiplos" << endl;
}
