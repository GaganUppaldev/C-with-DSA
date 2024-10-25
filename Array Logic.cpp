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
