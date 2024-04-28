//Let x increase

#include <iostream>
using namespace std;

/*can not work (n = 0)
void increase(int x){

    x++;

}
*/

/*using reference parameter (n = 1) 
void increase(int& x){

    x++;

}
*/

//using value parameter (n = 1)
void increase(int* x){

    (*x)++;

}

int main(){

    int n = 0;
    
    //using value parameter
    increase(&n);

    //using reference parameter
    //increase(n);

    cout << "n = " << n << endl;

}