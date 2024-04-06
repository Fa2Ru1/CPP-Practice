//Bubble sort:
//Step 1: Compare adjacent elements. If the first one is larger than the second one, swap them.
//Step 2: Do the same work on each pair.
//Step 3: Repeat Step2 until there is no pair of numbers to compare.

#include <iostream>
using namespace std;

int main(){

    int arr[] = {5, 13, 22, 1, 7, 90, 52};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < arrLength; i++){
        for(int j = 0; j < arrLength; j++){
            if(arr[j] <= arr[j+1]){    //adjacent number comparison
                arr[j];
            }else{
                int temp = 0;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int j = 0; j < arrLength; j++){
        cout << arr[j] << " ";
    }

}
