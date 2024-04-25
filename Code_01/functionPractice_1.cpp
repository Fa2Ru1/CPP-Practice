//The sum of two numbers by using a Function
//Define a function, input two numbers: x and y, and return x^3 + y^3

#include <iostream>
#include <math.h>
using namespace std;

int cubedSum(int x, int y){

    return pow(x, 3) + pow(y, 3);

}

int main(){

    int x, y;

    cout << "Input two numbers: " << endl;
    cin >> x >> y;
    cout << "The sum of the cubed of " << x << " and " << y << " is " << cubedSum(x, y) << endl;

}
