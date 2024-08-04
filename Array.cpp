//Array 
// Baisc array creation
#include <iostream>
using namespace std;
int main() {
  int array [15];
  cout<<array<<endl;//on printing array you will get memory address 0x7ffe7e45d100 not elememts of array

  int array2 [5] = {1,2,3,10,5};
  cout<<array2<<endl;
  cout<<array2[0]<<endl;//we got 1 
  //index inside array starts from 0 

  //to print array2 elements we need loop
  
  for(int i=0;i<=4;i++){
    cout<<array2[i]<<" ";
  }

  cout<<endl;
  //character elements in array
  char array3 [4] = {'a','b','c','d'};
  cout<<array3[0]<<endl;

  for(int i=0;i<=3;i++){
    cout<<array3[i]<<" ";
    
  }
  cout<<endl;


  
  
  
}

