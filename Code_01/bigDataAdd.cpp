//Add two big data:
//For example: 846382940261495634874 + 255446854321477
//Version_1: Simply implemented the addition of two large numbers
//  - issue 1: different digit numbers can not run successfully
//  - issue 2: negative numbers can not run successfully
//Version_2: Continue...
//Link: https://www.bilibili.com/video/BV1eL41187JS?t=6.2&p=70 (other methods)

#include <iostream>
using namespace std;

int main(){

    string num1 = "78216350";
    string num2 = "1254361";

    //get length of string
    int n1 = num1.length();
    int n2 = num2.length();

    //initialization
    int n;

    //check the length of numbers to decide the length of result array
    //the reason not to minus 1 is that considering carry
    if(n1 >= n2){
        n = n1;
    }else{
        n = n2;
    }
    
    //store the result
    int result[n];
    int carry = 0;  //carry = (7 + 8) / 10 = 1

    for(int i = n1 - 1, j = n2 - 1, k = n - 1; i >= 0, j >= 0; i--, j--, k--){
        int sum = carry;    //add two numbers of the same base digit
        if(i >= 0){
            //convert character num1[i] to a number, in ASCII encoding, the encoding of the numeric character '0' is 48            
            sum += num1[i] - '0';
        }
        if(j >= 0){
            sum += num2[j] - '0';
        }   
        result[k] = sum % 10; //store result   
        carry = sum / 10;   //carry
    }

    cout << "The result is: " << endl;
    for(int i = 0; i < n; i++){
        cout << result[i];
    }

}