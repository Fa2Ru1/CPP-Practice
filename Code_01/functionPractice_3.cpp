//Copy string
//Version_1: Simply implemented copy string
//  - issue 1: information input not implemented
//Version_2: Continue...
//Link: https://www.bilibili.com/video/BV1eL41187JS?t=365.2&p=74

#include <iostream>
using namespace std;

string copyString(string str, int n){

    string result;

    for(int i = 0; i < n; i++){
        result += str;
    }

    return result;
    
}

int main(){

    string str;
    int n;

    cout << copyString("Hello ", 5);

}