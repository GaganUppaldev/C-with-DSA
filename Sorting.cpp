// sorting means in asending order and their are 3 ways and every way have different time complexity 
// ways are Selection sorting , Bubble sorting, Insertion soritng
//selection sorting
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
//======================================================================================================================================
//Bubble sorting
/*
#include <iostream>
using namespace std;

void bubble(int arr[], int size) {
    for(int i = 0 ; i <  size - 1 ; i++){
        for(int j = 0; j < size - i - 1 ; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print(int size, int arr[]) {
    for(int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Bubble sort
    int arr[5] = {8, 20, 10, 1, 2}; 
    int size = sizeof(arr)/sizeof(int);

    cout << "Unsorted array: ";
    print(size, arr);

    bubble(arr, size);

    cout << "Sorted array: ";
    print(size, arr);
    
    return 0;
}


*/
//=======================================================================================================================================
//Insertion short 
/*
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}

*/



 



    
