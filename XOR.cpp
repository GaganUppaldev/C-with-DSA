#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 9;

    
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

   
    a = a ^ b;  
    b = a ^ b; 
    a = a ^ b; 

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    
    int arr[] = {1, 2, 3, 2, 1};
    int result = 0;

    
    for (int i = 0; i < 5; i++) {
        result ^= arr[i];
    }

    
    cout << "The element that appears only once in the array is: " << result << endl;

    return 0;
}
