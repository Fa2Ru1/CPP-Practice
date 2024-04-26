//Let x increase

#include <iostream>
using namespace std;

/*can not work(n = 0)
void increase(int x){

    x++;

}
*/

void increase(int* x){

    (*x)++;

}

int main(){

    int n = 0;
    
    increase(&n);
    cout << "n = " << n << endl;

}