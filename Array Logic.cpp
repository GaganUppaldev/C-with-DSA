//Some questions that we solve by our own logic that also have better algorithums to solve them
//Here that logic that i will try myself and work correctly will be saved

//============================================================================================================================================================
//Advancing through an Array GAME
/*
#include <iostream>
#include <string>
using namespace std;

int Cal(int arr[], int sizen) {
    for (int i = 0; i < sizen; i++) {
        if (i == 0 && (arr[0] >= 1 && arr[0] <= 3)) {
            cout << "Test 1 pass: arr[0] is between 1 and 3" << endl;
        } 
        else if (i == 1 && (arr[1] == 3 && 3 >= 3)) {
            cout << "Test 2 pass: arr[1] equals 3 and 3 >= 3" << endl;
        } 
        else if (i == 4 && (arr[4] == 2 && 2 >= 2)) {
            cout << "Test 4 pass: arr[4] equals 2 and 2 >= 2" << endl;
        } 
    }
    return 0;
}

void Game(int arr[], int sizen) {
    cout << "Make sure ALL 3 tests pass" << endl;
    string x;
    cout << "Type 'go' if you're ready to start the game" << endl;
    cin >> x;
    if (x == "go") {
        cout << "Game start" << endl;
        int step = 1;
        int loc = 0;
        for (int i = 0; i < 3; i++) {
            if (i == 0) {
                cout << "Step " << step << endl;
                loc = loc + 1;
                cout << "loc is " << loc << endl;
            } else if (i == 1) {
                cout << "Step 2" << endl;
                loc = loc + 3;
                cout << "loc is " << loc << endl;
            } else if (i == 2) {
                cout << "Step 3" << endl;
                loc = loc + 2;
                cout << "loc is " << loc << endl;
            }

            if (loc < sizen && arr[loc] == arr[sizen - 1]) {
                cout << "You won" << endl;
                break;
            }
        }
    }
}

int main() {
    cout << "Advancing through Array: GAME" << endl;
    int arr[7] = {3, 3, 1, 0, 2, 0, 1}; // Example array
    int sizen = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    cout << "Size of array: " << sizen << endl;
    Cal(arr, sizen); // Call the Cal function
    Game(arr, sizen); // Call the Game function correctly
    return 0;
}
*/
//=======================================================================================================================
//Removing dublicate numbers from an array and making them 0 then shifting to end of an an array 
/*
#include <iostream>
using namespace std;

int change(int arr[], int size) { 
    // Step 1: Remove duplicates by setting them to 0
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = 0;  // Set duplicate element to 0
            }
        }
    }

    // Step 2: Shift non-zero elements to the left
    int index = 0;  // This will track the position to place the next non-zero element
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];  // Move non-zero element to the left
            index++;
        }
    }

    // Fill remaining part of the array with 0
    while (index < size) {
        arr[index] = 0;
        index++;
    }

    return 0;
}

int print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int main() {
    cout << "Before change:" << endl;
    int arr[5] = {0, 1, 0, 3, 5};
    int size = 5;
    print(arr, size);

    change(arr, size);  

    cout << "After change:" << endl;
    print(arr, size);  

    return 0;
}*/
//======================================================================================================================
//Number is prime or not
/*
#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number = 29;
    if (isPrime(number))
        std::cout << number << " is a prime number.";
    else
        std::cout << number << " is not a prime number.";
    
    return 0;
}


*/
