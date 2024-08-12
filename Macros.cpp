#include <iostream>
using namespace std;

int main(){
    //Macros
    //We use Macro over creating variables because macro will not take any storage in memory and macro can't be changed while operations are performed inside the program. its value for next operation will be same as it was in previous operation.

    //Creation of macros
     #define PI 3.14  //created micro
     int a = 5;
     double res = PI*a; 
    cout<<res<<endl;


    //#define SQUARE(x) (x * x)  //here should be one but why x is working?, this will not work in complex cases so aviod it

    #define SQUARE(n) (n*n)
        int n = 7; 
        int result = SQUARE(n); // Expands to: (n * n) 
        cout << "Square of " << n << " is " << result; 

    //types of macros are pending 
}
