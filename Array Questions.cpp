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
















