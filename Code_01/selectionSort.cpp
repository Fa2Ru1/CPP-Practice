//Selection sort:
//Step 1:Find the smallest element in the unsorted sequence and store it at the beginning of the sorted sequence
//Step 2:Continue to find the smallest element in the remaining unsorted elements
//Step 3:Repeat Step2 until all elements are sorted

#include <iostream>
using namespace std;

int main(){

    int arr[] = {5,10,22,1,13,76,80,66};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int temp = 0;

    for(int i = 0; i < arrLength; i++){
        for(int j = i + 1; j < arrLength; j++){
            if(arr[i] <= arr[j]){   
                arr[i]; 
            }else{  //if bigger, swap the number
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int j = 0; j < arrLength; j++){
        cout << arr[j] << " ";
    }

}
