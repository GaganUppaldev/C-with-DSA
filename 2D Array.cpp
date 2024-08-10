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
    

    int arr3 [3] [3];
    cout<<"provide input than press space for other input "<<endl;
    // Input column-wise
    for (int col = 0; col < 3; col++) {
        for (int row = 0; row < 3; row++) {
            cin >> arr3[row][col] ;
        }
       
    }

    cout<<endl;

    // Print
    for (int i = 0;  i < 3; i++) {
        for (int j = 0; j < 3; j ++) {
            cout<<arr3[i][j] << " ";
        }
        cout << endl; // To print each row on a new line
    }

    //intitaliztion of 2d array
    int arr4[3][3] = {{10,2,3},{4,5,6},{7,8,9}};
    // Print
    
    for (int i = 0;  i < 3; i++) {
        for (int j = 0; j < 3; j ++) {
            cout<<arr4[i][j] << " ";
        }
        cout << endl; // To print each row on a new line
    }
    
        
 

    return 0;
}









 



    
 



