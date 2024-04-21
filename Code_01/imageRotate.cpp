//Rotate Image:
//Original 4 × 4 image:
//        {5, 1, 9, 11},
//        {2, 4, 8, 10},
//        {13, 3, 6, 7},
//        {15, 14, 12, 16}
//After rotating, the final image is:
//        {15, 13, 2, 5},
//        {14, 3, 4, 1},
//        {12, 6, 8, 9},
//        {16, 7, 10, 17}
//Tips:
//  - Step 1: Alternating rows and columns (rows become columns, columns become rows)
//  - Step 2: Alternating colums ([00] ~ [03]) to colums ([30] ~ [00]) 
//Link: https://www.bilibili.com/video/BV1eL41187JS?t=3.3&p=71 (other methods)

#include <iostream>
using namespace std;

int main(){

    int n = 4;

    int image[4][4] = {
        {5, 1, 9, 11},
        {2, 4, 8, 10},
        {13, 3, 6, 7},
        {15, 14, 12, 16}
    };

    //alternate rows and columns
    cout << "After alternating rows and columns: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << image[j][i] << ' ';
            if(j % n == n - 1){    //check if it reaches the end of each line
                cout << endl;
            }
        }
    } 

    //alternate columns (from image[0][0]..image[0][3] to image[0][3]..image[0][0])
    cout << "After alternating columns: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= 0; j--){
            cout << image[j][i] << ' ';
            if(j == 0){    //check if it reaches the end of each line
                cout << endl;
            }
        }
    } 

}