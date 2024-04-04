//Draw a love curve
//The coordinate of this heart: (x^2 + y^2 -a)^3 = x^2 * y^3

#include <iostream>
#include <cmath>
using namespace std;


int main(){

    const double a = 1;

    //set boundaries
    for(double y = 1.5; y >= -1.5; y -= 0.1){   
        for(double x = -1.5; x <= 1.5; x += 0.5 * 0.1){ 
            
            double result = pow((pow(x, 2) + pow(y, 2) - a), 3) - pow(x, 2) * pow(y, 3);    //C++ formats: x^2 = pow(x, 2)
            if( result <= 0){  
                cout << "*";
            }else{
                cout << " ";
            }
        }

        cout << endl;
    }
}

//Tips:
//Set the boundaries of x and y
//Determine if the point is inside the circle
