#include <iostream>
using namespace std;

int main(){
    // Sorting an array using selection sort

    int arr[4] = {1, 3, 2, 4};
    int size = sizeof(arr) / sizeof(int);

    // Selection Sort
    for(int i = 0; i < size - 1; i++){
        int minIndex = i; // Assume the minimum is the first element

        // Find the index of the minimum element in the remaining unsorted part
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if(minIndex != i){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Print the sorted array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}





 



    
