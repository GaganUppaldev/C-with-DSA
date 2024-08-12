#include <iostream>
using namespace std;

int test(int a) {
    a++; // Increment the copied value of 'a'
    return 0;
}

int test2(int &a){
    a++; // Increment the original value of 'a'
    return 0;
}

int main() {
    // Reference variable
    int a = 5;
    cout << "Before = " << a << endl;

    test(a); // Called function

    cout << "After = " << a << endl;
    cout << "Both are the same because we are copying the value of 'a' into the function, and the function only modifies the copied value, not the original variable 'a'." << endl;



    test2(a);
    cout<<a<<endl;//here is 6 because we are passing the reference of a to the function and the function is incrementing the value of a which is 5 and




}
