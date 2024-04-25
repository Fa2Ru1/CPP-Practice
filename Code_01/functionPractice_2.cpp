//Factorial calculation by using function

#include <iostream>
using namespace std;

int factorialCalculation(int x){

    int factorial = 1;

    for(int i = 1; i <= x; i++){
        factorial *= i;
    }

    return factorial;

}

int main(){

    int x;

    cout << "Input a number you want to know the factorial: " << endl;
    cin >> x;
    cout << "The factorial of " << x << " is " << factorialCalculation(x) << endl;    
}