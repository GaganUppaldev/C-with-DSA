#include <iostream>
using namespace std;

short check_parity(unsigned long x) {
    short result = 0;
    while (x) {
        result ^= (x & 1);
        x >>= 1;
    }

    return result;
}

int main() {
    cout << "Number we put inside function when converted to binary form is it odd or even" << endl;
    cout << "0 means even" << endl;
    cout << "1 means odd" << endl;

    
    unsigned long number = 1;  
    short parity = check_parity(number);
    cout << "Parity of " << number << " is: " << parity << " (";
    cout << (parity == 0 ? "even" : "odd") << ")" << endl; 

    return 0;
}
