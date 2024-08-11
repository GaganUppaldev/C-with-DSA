#include <iostream>
using namespace std;



int main() {
    //creating baisc variable
    
    int a = 1; //inside memeory integer 1 is stored with address a
    //But a is not a actual adress
    cout<<a<<endl;
    //& operation is used to get the address of a variable

    int *p = &a;
    cout<<p<<endl;//This is adress inside memory and a library is used to map variable name like a with this adress
     cout<<*p<<endl; //this is used to get the value of a variable from the adress of a variable
    int p2 = a;
    cout<<p2<<endl;//here we got value of a and not adress

    p2++;
    cout<<p2<<endl;//value got added by 1

    int *q = &a;
    cout<<q<<endl;

    //adress size is 8 bytes

    int size = sizeof(a);
    int size2 = sizeof(*p);
    

    cout<<size<<endl;
    cout<<size2<<endl;//4 bytes and i will remian same for adress *p because it only store adress not value
    
  //Important concept 

    int test = 1;
    int *test2 = &test;//adress
    cout<<test2<<endl;
    cout<<sizeof(test2)<<endl;//adress size is 8 bytes
    cout<<" adress  "<<test2+1<<" size after +1 is "<<sizeof(test2+1)<<endl;//adress got added by 4 bytes
    cout<<" on addition adress got added by 4"<<endl;
    cout<<test2-1<<" size after -1 is "<<sizeof(test2-1)<<endl;//adress got subtracted by 4 bytes

    cout<<"means size of adress will not be effected ay + or - it will remain 8"<<endl;

//summary :
////adress got added or subtracted by 4 bytes
//means size of adress will not be effected ay + or - it will remain 8

//=======================================================================================================================================
//Array with Pointers important points 
#include <iostream>
using namespace std;



int main() {
    //Array with pointers 
    //adress of array is location of its element at 0 index

    int arr[5] = {1,2,3,4,5};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl; //adress 0f element at index 1
    cout<<arr[1]<<endl;//value of element at index 1

    //new approch
    cout<<*(arr+3)<<endl; //value of element at index 3
    cout<<*(arr)+3<<endl; //value of element at index 3
    cout<<*arr+3<<endl; //value of element at index 3

    //important location or formula
    //arr[i]  = *(arr+i);
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;

    int temp[10] = {1,2};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl; //size of element at 0 index
    cout<<sizeof(temp[0])<<endl;////size of element at 0 index


    int t[10] = {1,2};
    int *p  = &t[0];
    cout<<*p<<endl;//value
    cout<<p<<endl;//adress of t[0]
    cout<<&p<<endl;//adress of pointer p
    
    
    
    



       
    
    
}

//======================================================================================================================================
//char Array and pointer

#include <iostream>  // Include the input-output stream library
using namespace std;  // Use the standard namespace

int main() {
    // Initialize a character array (string) with "abcd"
    // The array size is 10, so "abcd" is stored as {'a', 'b', 'c', 'd', '\0', ...}
    // with remaining elements filled with null terminators '\0'.
    char value[10] = "abcd";

    // Output the first character of the array, which is 'a'
    cout << value[0] << endl;  // Output: a

    // Output the entire string stored in the character array
    // Since value is an array of characters, it automatically prints the string until it hits a null terminator '\0'
    cout << value << endl;  // Output: abcd

    // Output the address of the array
    // &value gives the address of the array in memory
    cout << &value << endl;  // Output: Memory address of 'value' array

    // Pointer declaration
    // char* ptr is a pointer that points to the first element of the array 'value'
    char *ptr = value;

    // Output the pointer, which actually prints the entire string starting from the address ptr is pointing to
    cout << ptr << endl;  // Output: abcd

    // Output the value pointed by the pointer (dereferencing)
    // This will print the first character in the string that ptr points to, which is 'a'
    cout << *ptr << endl;  // Output: a

    // Output the address of the pointer itself
    // &ptr gives the address where the pointer 'ptr' is stored in memory
    cout << &ptr << endl;  // Output: Memory address of 'ptr' variable
}


//====================================================================================================================================
//Function with Pointers
#include <iostream>
using namespace std;

int update(int *p){
    *p = *p+1;
  return 0;
}



int main() {
    int value = 5;
    int *p = &value;

    //print p
    cout<<*p<<endl;
    update(p);
    cout<<*p<<endl;
    return 0 ;
    
}
//This will exlaborate use Pointers with function and array , by using this we can send any part of array in function like below code
#include <iostream>
using namespace std;

// Function to add 2 to elements starting from index 3
void addTwoFromIndexThree(int arr[], int size) {
    // Check if the array has at least 4 elements
    if (size > 3) {
        for (int i = 3; i < size; i++) {
            arr[i] += 2;  // Add 2 to each element starting from index 3
        }
    } else {
        cout << "Array does not have enough elements!" << endl;
    }
}

int main() {
    // Initialize an array with some elements
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the function to add 2 to elements starting from index 3
    addTwoFromIndexThree(arr, size);

    // Print the modified array
    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}









