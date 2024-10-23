//Linked list 
#include <iostream>
using namespace std;

int search(int size,int key,int arr[]) { 

  for(int i=0;i<size;i++){
    
    
    if (arr[i]==key){
      
      cout<<key<<" PRESENT at index "<<i<<endl;
      
    }
    else{
    
      cout<<key<<" is not present at index "<<i<<endl;
    }
    
    
  }

  return 0;
  
  
  
}

int main(){
  int key;
  cin>>key;
  int arr[5] = {10,20,30,40,50};
  int size = sizeof(arr)/sizeof(int);
  cout<<size<<endl;
  
  
  
  int end  = search(size,key,arr);
  cout<<end<<endl;
  
}
//REVERSED AN ARRAY 
/*
#include <iostream>
using namespace std;


void reverse(int arr[], int size ){ //i suffered errror because i used int instead of void
    int first = 0; //error here came because i define arr[0] = first
    int last = size - 1;//error here came because i defined arr[size-1] = last;

    while(first < last ){
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;//i forgot to increment first
        last--;//i forgot to deincrement last
    }
}
    

    

void print(int arr[] , int size){//i suffered errror because i used int instead of void
    for(int i=0;i<size;i++){
        cout << arr[i]<<" ";
    }
    
}

int main(){
 int arr [6] = {3,1,2,7,11,8};
 int size =  sizeof(arr)/sizeof(int);
 cout<<size<<endl;

reverse(arr,size);
print(arr,size);



}
*/
//=======================================================================================================================================
/*<OUESTION 1> Finding muliple elements from an array 

I BUILT LOGIC MYSELF BUT I HAD A EXEPTION IN DETERMING WEATHER FIRST ELEMENT HAVE MULTIPLE OR NOT BUT STILL CODE WORLED WELL FOR REST SO I AM ADDIN
ING IT HERE

#include <iostream>
using namespace std;
int main(){
  
  int arr[3] = {1,2,1};
  int size;
  size = sizeof(arr)/sizeof(int);
  cout<<size<<endl;

  for(int i=0;i<=size-1;i++){
    cout<<arr[i]<<endl;
    int first = 0;
    int final = arr[first]^arr[i];
    cout<<final<<endl;
    if(final==0){
      cout<<"Duplicate element is "<<arr[i]<<" "<<i<<endl;
    }
    else{
      cout<<"No duplicate element at index "<<i<<endl;
    }
  }
}
    
===========================CORRECT APPROACH=========================================================================================
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 1};
    int size;
    size = sizeof(arr) / sizeof(int);
    cout << "Array size: " << size << endl;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << "Duplicate element is " << arr[i] << " at index " << j << endl;
            }
        }
    }

    return 0;
}
========================================================================================================================================
<QUESTION  2 > 
FINDING A DUBILCATE ELEMENT FROM AN ARRAY WHERE ELEMENTS ARE FROM N TO N-1 AND ALL INTEGERS only one pair is dublicate and rest are 
differrent 
WE CAN SOLVE IT WITH TWO APPROACHES AND HERE ARE BOTH

//SOLVING WITH LINEAR SEARCH
#include <iostream>
using namespace std;

int main() {

  int arr[5] = {1,2,3,4,3};//n-1

  //finding dubilcate 
  //linear search 

  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      if(arr[i]==arr[j]){
        cout<<arr[i]<<" is dublicate sir"<<endl;
      }
    }
    
    
  }


=======================(XOR METHOD)

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 3}; // array with one duplicate
    int size = sizeof(arr) / sizeof(int);

    int xor_all_elements = 0;
    int xor_1_to_n_minus_1 = 0;

    // XOR all elements in the array
    for (int i = 0; i < size; i++) {
        xor_all_elements ^= arr[i];
    }

    // XOR all numbers from 1 to n-1
    for (int i = 1; i <= size - 1; i++) {
        xor_1_to_n_minus_1 ^= i;
    }

    // The result is the duplicate element
    int duplicate = xor_all_elements ^ xor_1_to_n_minus_1;

    cout << "Duplicate element: " << duplicate << endl;

    return 0;
}

=========================================================================================================================================
<OUESTION 3> PAIR SUM 
FIND PAIR OF TWO ELEMENTS FORM AN ARRAY int arr ={1,2,3,4,5} WHOOSE SUM IS EQUAL TO = 5

<SOLUTION>
#include <iostream>
using namespace std;

int main() {

  

  int arr[5] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(int);

  int goal = 5;
  // i = 0 ; j =1 ---> size 
  for ( int i = 0 ; i < size ; i++ ){
    for ( int j = i+1 ; j < size ; j++ ){
      int result = arr[i] + arr[j];
      if ( result == goal ){
        cout<<arr[i]<<" and  "<<arr[j]<<" pair sum is "<<result<<endl;
      }
      
    }
  }
    
}
*/

//======================================================================================================================================
//<Question 4>
// Find out maximum element from an array using Linear search

/*
#include <iostream>
using namespace std;

int main() {
    // Find max element value in array 
    int arr[5] = {1, 2, 3, 4, 50};
    int size = sizeof(arr)/sizeof(int);

    // Initialize max value with the first element of the array
    int maxVal = arr[0];

    // Iterate through the array to find the maximum value
    for(int i = 1; i < size; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Output the maximum value
    cout << "MAX VALUE IS : " << maxVal << endl;

    return 0;
}
*/

//======================================================================================================================================
//<Question 5>
//Find The value  of Key from using binary search and its index number also
// Array = { 1,2,30,4,5} , key = 30

/*
#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 30, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  cout << "Array size: " << size << endl;

  int key = 30; // value to search for
  int start = 0;
  int end = size - 1;

  while (start <= end) {
    int mid = (start + end) / 2;
    cout << "Current mid index: " << mid << endl;

    if (arr[mid] == key) {
      cout << "Value " << key << " found at index " << mid << endl;
      return 0;
    } else if (arr[mid] < key) {
      start = mid + 1;
      cout << "Updating start to " << start << endl;
    } else {
      end = mid - 1;
      cout << "Updating end to " << end << endl;
    }
  }

  cout << "Value " << key << " not found in the array." << endl;
  return 0;
}
*/
//=====================================================================================================================================
//<Question 6>
//Implement Binary Search to Find the Leftmost and Rightmost Occurrences of a Key in a Sorted Array

/*
#include <iostream>
using namespace std;

// Function to find the leftmost (first) occurrence of the key
int findLeftmost(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2; //we used it for safer calculation otherwisw simple mid = (start + end) / 2 was also valid

        if (arr[mid] == key) {
            result = mid;
            end = mid - 1; // Move to the left half
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return result;
}

// Function to find the rightmost (last) occurrence of the key
int findRightmost(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            result = mid;
            start = mid + 1; // Move to the right half
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return result;
}

int main() {
    int arr[8] = {1, 2, 2, 2, 3, 4, 5, 5};
    int key = 2;
    int size = sizeof(arr) / sizeof(arr[0]);

    int leftmost = findLeftmost(arr, size, key);
    int rightmost = findRightmost(arr, size, key);

    if (leftmost != -1 && rightmost != -1) {
        cout << "Element " << key << " found from index " << leftmost << " to index " << rightmost << endl;
    } else {
        cout << "Element " << key << " not found" << endl;
    }

    return 0;
}
*/
//=======================================================================================================================================
//<Question 7> 

//Finding Peak element in an array = {0,4,10,1}

/*
//peak element in mountain array
#include <iostream>
using namespace std;

//to find peak element in mountain array
int peakelement(int arr[],int size){
    int start = 0;
    int end = size-1;
    

    while(start<end){
        int mid = start + (end-start)/2;
        //compare
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }else{
            end = mid;
        }
    }
    
    return start;
    
}

int main() {
   int arr[4] = {0,4,10,1};
   int size = sizeof(arr)/sizeof(int);
    
    cout<<size<<endl;
    
     int peakIndex = peakelement(arr, size);
    cout << "Peak element is at index " << peakIndex << " with value " << arr[peakIndex] << endl;

  
    
}


*/
//=======================================================================================================================================
//<QUESTION 8>
//Find Piovet element from an array

/*
#include<iostream>
using namespace std;

int findPivot(int arr[], int size) {
    int start = 0, end = size - 1;

    // If the array is not rotated
    if (arr[start] <= arr[end]) {
        return start;
    }

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if mid element is the pivot
        if (mid < end && arr[mid] > arr[mid + 1]) {
            return mid + 1;
        }
        if (mid > start && arr[mid] < arr[mid - 1]) {
            return mid;
        }

        // Decide which half to choose for finding the pivot
        if (arr[mid] >= arr[start]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[5] = {7, 9, 1, 2, 3};
    int size = sizeof(arr) / sizeof(int);

    int pivotIndex = findPivot(arr, size);
    cout << "Pivot index: " << pivotIndex << endl;
    cout << "Pivot element: " << arr[pivotIndex] << endl;
}
//========================================================================================================================

//Dutch flag problem
/*
#include <iostream>
#include <vector>
using namespace std;

typedef enum { RED, WHITE, BLUE } color;

void Dutchflag(int pv_index, vector<color>* A_ptr) {
    vector<color>& A = *A_ptr;  // Reference to the vector
    color pivot = A[pv_index];  // Get the pivot color

    // First group: move all elements less than pivot
    for (int i = 0; i < A.size(); ++i) {
        for (int j = i + 1; j < A.size(); ++j) {
            if (A[j] < pivot) {
                swap(A[i], A[j]);
                break;
            }
        }
    }

    // Second group: move all elements greater than pivot
    for (int i = A.size() - 1; i >= 0 && A[i] >= pivot; --i) {
        for (int j = i - 1; j >= 0; --j) {
            if (A[i] > pivot) {
                swap(A[i], A[j]);
                break;
            }
        }
    }
}

void printColors(const vector<color>& colors) {
    for (color c : colors) {
        switch (c) {
            case RED: cout << "RED "; break;
            case WHITE: cout << "WHITE "; break;
            case BLUE: cout << "BLUE "; break;
        }
    }
    cout << endl;
}

int main() {
    cout << "Dutch National Flag Problem" << endl;

    // Initialize the vector with colors
    vector<color> colors = { RED, WHITE, BLUE, WHITE, RED, BLUE, RED };

    cout << "Original colors: ";
    printColors(colors);

    // Set pivot index (for example, we can choose the first element)
    int pivotIndex = 0; // Choosing RED as the pivot

    // Call the Dutchflag function
    Dutchflag(pivotIndex, &colors);

    // Print the sorted colors
    cout << "Sorted colors: ";
    printColors(colors);

    return 0;
}
==========================SOLVED WITH log(n) time complexity==========================================================
//time complexity 0(n) now
#include <iostream>
#include <vector>
using namespace std;

typedef enum {RED, WHITE, BLUE} color;

void sol(int mid, vector<color>* A_ptr) {
    vector<color>& A = *A_ptr;  // A is a reference to the vector
    color pivot = A[mid];       // WHITE

    // First pass
    int smaller = 0;
    for (int i = 0; i < A.size(); i++) { 
        if (A[i] < pivot) {          
            swap(A[i], A[smaller++]);
        }
    }

    // Second pass
    int larger = A.size() - 1;
    for (int i = A.size() - 1; i >= 0; --i) {
        if (A[i] > pivot) {               
            swap(A[i], A[larger--]);
        }
    }
}

void printColors(const vector<color>& A) {
    for (color c : A) {
        switch (c) {
            case RED: cout << "RED "; break;
            case BLUE: cout << "BLUE "; break;
            case WHITE: cout << "WHITE "; break;
        }
    }
    cout << endl;
}

int main() {
    cout << "Improved time complexity of Dutch National Flag" << endl;

    vector<color> A = {RED, WHITE, BLUE, BLUE, RED, WHITE, BLUE};

    sol(1, &A); 

    printColors(A);

    return 0;
}

===============================================New way but with time complexity O(n)===============================
#include <iostream>
#include <vector>
using namespace std;

typedef enum { RED, WHITE, BLUE } color;

void dutchFlagSort(int mid, vector<color>* A_ptr) {
    vector<color>& A = *A_ptr;
    int pivot = A[mid];

    int smaller = 0, equal = 0, larger = A.size();

    // Keep iterating as long as there is an unclassified element
    while (equal < larger) {
        if (A[equal] < pivot) {
            swap(A[smaller++], A[equal++]);
        } else if (A[equal] == pivot) {
            ++equal;
        } else {  // A[equal] > pivot
            swap(A[equal], A[--larger]);
        }
    }
}

void printColors(const vector<color>& A) {
    for (color c : A) {
        switch (c) {
            case RED: cout << "RED "; break;
            case WHITE: cout << "WHITE "; break;
            case BLUE: cout << "BLUE "; break;
        }
    }
    cout << endl;
}

int main() {
    cout << "Dutch Flag Problem" << endl;

    vector<color> A = {RED, WHITE, BLUE, BLUE, RED, WHITE, BLUE};

    dutchFlagSort(1, &A); // 1 is the pivot index for WHITE

    printColors(A); // Print the sorted array

    return 0;
}

*/

/*
#include <iostream>
#include <vector>
using namespace std;

vector<int> Multiply(vector<int> num1, vector<int> num2) {
    int sign = (num1[0] < 0 ^ num2[0] < 0) ? -1 : 1;
    num1[0] = abs(num1[0]);
    num2[0] = abs(num2[0]);
    vector<int> result(num1.size() + num2.size(), 0);
    
    for (int i = num1.size() - 1; i >= 0; --i) {
        for (int j = num2.size() - 1; j >= 0; --j) {
            result[i + j + 1] += num1[i] * num2[j];
            result[i + j] += result[i + j + 1] / 10;
            result[i + j + 1] %= 10;
        }
    }

    while (result.size() > 1 && result[0] == 0) {
        result.erase(result.begin());
    }

    if (sign == -1) {
        result[0] *= -1;
    }

    return result;
}

int main() {
    vector<int> num1 = {4, 3};  // 43
    vector<int> num2 = {6, 5};  // 65
    vector<int> result = Multiply(num1, num2);
    
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;

    return 0;
}

*/










