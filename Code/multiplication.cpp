//This is a Multiplication Table

#include <iostream>
using namespace std;

int main(){

    cout << "This is a Multiplication Table:" << endl;

    for(int i = 1; i < 10; i++){
        
        for(int j = 1; j <= i; j++){

            cout << j << "X" << i << "=" << i*j << "\t";

            if(i == j){
                cout << endl;
            }

        }
    }

    return 0;

}
