#include <iostream>
using namespace std;

int main() {
    int arr [3] [3];

    for(int i = 0 ; i <3 ; i++){

        for(int j = 0 ; j <3 ; j++){
            cout<<i<<" ";
        }

        cout<<endl;

    }
    cout<<endl;

    cout<<arr<<endl ;//provide address inside memory 


    
    int arr2[3][3];
     cout<<"provide input than press space for other input "<<endl;
    // Input row-wise
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cin >> arr2[row][col];
        }
    }

    // Print
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << arr2[row][col] << " ";
        }
        cout << endl; // To print each row on a new line
    }

    return 0;
}
