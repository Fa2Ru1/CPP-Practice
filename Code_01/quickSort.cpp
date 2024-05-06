//Quick Sort
//Good theory and code: https://www.bilibili.com/video/BV1at411T75o?t=2.0
//Link: https://www.bilibili.com/video/BV1eL41187JS?p=87

#include <iostream>
using namespace std;

void printArray(int array[], int);
void quickSort(int array[], int L, int R);

int main(){

    int arr[10] = {11, 4, 7, 23, 44, 1, 65, 45, 32, 90};

    //print the original array
    printArray(arr, 10);

    //quickSort
    quickSort(arr, 0, 9);
    cout << endl;

    //print the new array
    printArray(arr, 10);

}

//define quickSort function
void quickSort(int array[], int L, int R){    //change the position of elements, so can not use 'const'

    //benchmark
    if(L >= R){
        return;
    }

    int left = L, right = R;
    int pivot = array[left];    //warning, do not know reason

    //compare
    while(left < right){
        while(left < right && array[right] >= pivot){
            right--;
        }
        if(left < right){
            array[left] = array[right];
        }
        while(left < right && array[left] <= pivot){
            left++;
        }
        if(left < right){
            array[right] = array[left];
        }
        if(left >= right){
            array[left] = pivot;
        }
    }

    quickSort(array, L, right - 1);
    quickSort(array, right + 1, R);

} 

void printArray(int array[], int i){

    for(int i = 0; i < 10; i++){
        cout << array[i] << " ";
    }

}
