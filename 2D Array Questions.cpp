//here will be questions and solution of 2D arrays
//===========================================================================================================================================================================================
/*
//<QUESTION 1>

//create a function to check that  any random number  is present or not inside an 2D array
//Solution

#include <iostream>
using namespace std;

//function for linear search
int search(int arr[] [3], int target){
    for(int i = 0 ;i < 3 ; i++){
        for(int j = 0 ;j<3 ; j++){
            if(arr[i][j] == target)
            cout<<"we found this elemenet"<<" at row "<<i<<" and col "<<j<<endl;
            else{
                cout<<"not found"<<endl;
            }
        }
        
    }
    return 0;
}


int main() {
    
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

    cout<<"number you want to search type below"<<endl;
    int target;
    cin>>target;

    search(arr2,target);

    

    


    
}


*/
