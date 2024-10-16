#include <iostream>
using namespace std;

// Function to check if a number is odd or even
int tester(int x) {
    return x & 1;// ue of & operator
}

int main() {
    
    cout << "Odd or Even Number Checker" << endl;
    cout << "0 means Even" << endl;
    cout << "1 means Odd" << endl;

    
    cout << "Enter the number you want to check: " << endl;
    int x;
    cout << "Type here -> ";
    cin >> x;
    cout << endl;

    
    if (tester(x)) {
        cout << "The number " << x << " is Odd." << endl;
    } else {
        cout << "The number " << x << " is Even." << endl;
    }

    
}
