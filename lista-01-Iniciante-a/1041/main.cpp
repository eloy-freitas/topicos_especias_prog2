#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    float x, y;
    scanf("%f %f", &x, &y);
    if(x > 0 && y > 0){
        cout << "Q1" << endl;
    }else if(x < 0 && y > 0){
        cout << "Q2" << endl;
    }else if(x < 0 && y < 0){
        cout << "Q3" << endl;
    }else if(x > 0 && y < 0){
        cout << "Q4" << endl;
    }else if (x != 0 && y == 0){
        cout << "Eixo X" << endl;
    }else if (x == 0 && y != 0){
        cout << "Eixo Y" << endl;
    }else{
        cout << "Origem" << endl;
    }
    
    
}
