//Fibonacci sequence: 1、1、2、3、5、8、13、21、34...
//Link: https://www.bilibili.com/video/BV1eL41187JS?t=62.3&p=85

#include <iostream>
using namespace std;

//define a fibonacci sequence
int fibonacci(int n){

    if(n == 1 || n == 2){
        return 1;
    }

    return fibonacci(n - 2) + fibonacci(n - 1);

}

int main(){

    cout << "fibonacci(9) is: " << fibonacci(9) << endl;
    
}