//Reverse array
//Example:
//A array is: {1, 2, 3, 4, 5, 6, 7}
//After reverse: {7, 6, 5, 4, 3, 2, 1}
//Link: https://www.bilibili.com/video/BV1eL41187JS?p=68 (other methods)

#include <iostream>
using namespace std;

int main(){

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "After reverse, the new array is:" << endl;

    for(int i = length - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }

}