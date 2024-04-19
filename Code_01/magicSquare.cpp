//A Magic Square:
//Need to meet the requirement that the horizontal, vertical and diagonal sum is equal to same value
//Link: https://www.bilibili.com/video/BV1eL41187JS?t=2.7&p=69 (better method: more concise)

#include <iostream>
using namespace std;

int main(){

    int n =3;
    //flag shows results
    bool isMagicSquare = true;

    //multidimensional arrays
    int arr[n][n] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    };

    //targetSum = horizontalSum = verticalSum = diagonalMainSum = diagonalSecondarySum = totalSum / n
    //sum = 1 + 2 + 3 + ... + n = (1 + n) * n / 2
    int targetSum;
    int totalSum = 0; 

    //calculate the target sum
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            totalSum = totalSum + arr[i][j];
        }
    }
    targetSum = totalSum / n;

    //calculate the horizontal sum
    for(int i = 0; i < n; i++){
        int horizontalSum = 0;
        for(int j = 0; j < n; j++){
            horizontalSum += arr[i][j]; 
        }
        //check if the horizontal sum is equal to target sum
        if(horizontalSum != targetSum){
            isMagicSquare = false;
            cout << "It is not a Magic Square by comparing the horizontal sum" << endl;
            break;
        }else{
            continue;
        }
    }

    //calculate the vertical sum
    for(int j = 0; j < n; j++){
        int verticalSum = 0;
        for(int i = 0; i < n; i++){
            verticalSum += arr[i][j]; 
        }
        //check if the vertical sum is equal to target sum
        if(verticalSum != targetSum){
            isMagicSquare = false;            
            cout << "It is not a Magic Square by comparing the vertical sum" << endl;
            break;
        }else{
            continue;
        }
    }

    //calculate the diagonal sum (main diagonal)
    int diagonalMainSum = 0;
    for(int i = 0, j = 0; i < n, j < n; i++, j++){
        diagonalMainSum += arr[i][j];
    }
    //check if the main diagonal sum is equal to target sum
    if(diagonalMainSum != targetSum){
        isMagicSquare = false;        
        cout << "It is not a Magic Square by comparing the main diagonal sum" << endl;
    }

    //calculate the diagonal sum (secondary diagonal)
    int diagonalSecondarySum = 0;
    for(int i = 0; i < n; i++){
        diagonalSecondarySum += arr[i][n - i - 1];
    }
    //check if the secondary diagonal sum is equal to target sum
    if(diagonalSecondarySum != targetSum){
        isMagicSquare = false;
        cout << "It is not a Magic Square by comparing the secondary diagonal sum" << endl;
    }   

    //using flag
    if(isMagicSquare){
        cout << "It is a Maigc Square" << endl;
    }

}