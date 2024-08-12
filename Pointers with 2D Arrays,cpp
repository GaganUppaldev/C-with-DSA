#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols;

    // Dynamically allocate memory for a 2D array
    int **arr = new int*[rows];

    // Taking the number of columns as input
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Taking input for the 2D array
    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing the 2D array
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Freeing dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];  // Free memory allocated for each row
    }
    delete[] arr;  // Free memory allocated for row pointers

    return 0;
}
