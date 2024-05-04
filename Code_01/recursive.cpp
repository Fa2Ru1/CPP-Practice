//The theory of recursive
//Link: https://www.bilibili.com/video/BV1eL41187JS?t=2.1&p=84

#include <iostream>
using namespace std;

//define factorial function by using recursive
int factorial(int n){

    if(n == 1){
        return 1;
    }

    return factorial(n - 1) * n;

}
int main(){

    cout << "5! = " << factorial(5) << endl;

}