//Binary Search
//Link: https://www.bilibili.com/video/BV1eL41187JS?t=3.5&p=86

#include <iostream>
using namespace std;

//define a binary search
int searchNumber(const int(&a)[10], int start, int end, int target){

    //if the array has no elements, return -1
    if(start > end){
        return -1;
    }

    //calculate the coordinates of the middle position
    int mid = (start + end) / 2;

    //compare the number of middle position and target number
    if(a[mid] == target){
        return mid;
    }else if(a[mid] > target){
        return searchNumber(a, start, mid - 1, target);  //the position of mid is biiger than target
    }else{
        return searchNumber(a, mid + 1, end, target);   //the position of mid is smaller than target
    }

}
int main(){

    int arr[10] = {1, 4, 7, 23, 44, 51, 65, 66, 78, 90};

    int key = 10;

    int size = sizeof(arr) / sizeof(arr[0]);

    int result = searchNumber(arr, 0, size - 1, key);

    result == -1 ?
        cout << "There is no " << key << " in the array" << endl:
        cout << "There is " << key << "in the array, and the index is " << result << endl;

}