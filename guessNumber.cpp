//Guess number between 0 and 100
//If correct, output and exit. if not correct, prompt number bigger or smaller
//5 chances

#include <iostream>
#include <ctime> //using the current system time 
using namespace std;

int main(){

    srand((unsigned int)time(NULL));    //generate random numbers to ensure number is different every time
    int randomNumber = (rand()%(100 - 0 + 1)) + 0;    //random number expression: (rand()%(b-a+1))+a [a, b]

    // cout << randomNumber << endl;    //test: verify number accuracy

    int number; // user output
    int chances = 5;

    cout << "Enter a numeber you guess: " << endl;

    while(chances){

        cin >> number;

        if(number == randomNumber){
            cout << "Congrates, the random number is: " << randomNumber;
            return 0;
        }
        else if(number > randomNumber){
            cout << "Bigger, try again" << endl;
        }else{
            cout << "Smaller, try again" << endl;
        }

        chances--;

        if(chances == 0){
            cout << "You lost." << endl;
            return 0;
        }
    }
}