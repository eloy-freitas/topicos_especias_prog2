#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]){
    int size = 0;
    
    while(cin >> size){
        int diff = 0;
        int values[size];
        int jolly[size];
        bool is_jolly = true;

        memset(jolly, -1, sizeof(jolly));

        for(int i = 0; i < size; i++){
            cin >> values[i];
        }

        for(int i = 0; i < size - 1; i++){
            diff = abs(values[i] - values[i+1]);
            if(jolly[diff] == -1){
                jolly[diff] = 1;
            }
            else{
                is_jolly = false;
                break;
            }    
        }

        if(is_jolly){
            cout << "Jolly\n";
        }
        else{
            cout << "Not Jolly\n";
        }
    }
       
}
