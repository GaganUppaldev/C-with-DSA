// Here i will add binary serach basics with examples and high level questions will be in Binary Search Questions.cpp file 

//FIRST CONDITION FOR FOR BINARY SEARCH IS THAT ELEMENTS INSIDE AN ARRAY SHOULD BE IN FORM OF  MONOTONIC FUNCTIONS
//Binary search  alogritum work in pattren  
//Mid is very important and all algo is based on it we find it using  (starting - ending /2) of index 
// provide key ( element you want to search ) ----> mid ----> compare key with mid and move forward or backword after comapring angian demans mid and again compare until it get element or try evry possiblity

//Basic operation using binary search
#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key ) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1; // return -1 if key is not found
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    int index = binarysearch(arr, size, 5);
    cout << "Index of 5 is " << index << endl;

    return 0;
}

