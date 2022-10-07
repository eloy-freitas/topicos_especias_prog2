#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int cases = 0, streets = 0, sum_delta = 0, smallest;
    int* distances;
    int* street_numbers;

    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> streets;
        distances = (int*)malloc(streets*sizeof(int));
        street_numbers = (int*)malloc(streets*sizeof(int));
        for(int j = 0; j < streets; j++){
            cin >> street_numbers[j];
        }
        for(int k = 0; k < streets; k++){
            sum_delta = 0;
            for(int l = 0; l < streets; l++)
                sum_delta += abs(street_numbers[k] - street_numbers[l]);
            distances[k] = sum_delta;
        }
        smallest = distances[0];
        for(int i = 0; i < streets; i++)
            if(distances[i] < smallest)
                smallest = distances[i];
        printf("%d\n", smallest);
    }
        
}
