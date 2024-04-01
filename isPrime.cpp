//Determine if it is a prime number between 0 and 100, and output
//Prime Number: bigger than 1 and cannot be divided by other natural numbers except for 1 and itself

#include <iostream>
using namespace std;

int main(){

    for(int i = 0; i <= 100; i++){    

        //output if number is equal to 2
        if (i == 2){
            cout << i << "\t";
        }           

        for(int j = 2; j < i; j++){

            //determine if it can be divided
            if(i % j == 0){                   
                break;  //once can be divided, continue for loop
            }
            //if can not be divide until last number
            //for example:5 % 4 != 0, it is prime
            if(i == j + 1){
                cout << i << "\t";
            }     

        }
    }
}