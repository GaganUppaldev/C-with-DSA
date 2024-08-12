#include <iostream>
using namespace std;

int main(){
    //Static memeory example
    //int arr [4] = {10,20,30,40}; //here we definded the size of the array means we know it during complie time and it will not change during run time

    //Dynamic memory example
    //cin>>n;
    //int arr[n]; //here we don't know the size of the array during complie time and it will change during run time //it depents on input n

    //stack memory
    //By default all the variables are stored in stack memory But if we use variable which depends on user input than program will crash so we use dynamic memory allocation

    //Dynamic memory allocation
    int *i = new int; //here we are allocating memory to the pointer i
    cout<<sizeof(*i)<<endl;

    int n ;
    cin>>n;//taking input

    //varaible  array
    //new int [n] ; is creating an array of size n in heap memory
    //int*arr is storing adress of array or its first element
    int *arr = new int [n];
    cout<<*arr<<endl;

    //Important points 
    
    while(true){
        //pointer  8 byte and int 4 byte
        int *q = new int; //here we are allocating memory to the pointer q

        //if we don't use delete keyword than it will create a memory leak

        //here pointer will take 8 byte of memory in stack memory but new int will add 4 byte of memory in heap memory on eveytime when loop restart that will cause memory leak and program crash 

        //if we use delete keyword than it will delete the memory of pointer q and it will not create a memory leak
        delete q; //without delete it will crash after time 
    
    }
    

    
}

//static memory will be auto deleted but dynamic memory will not be deleted 
