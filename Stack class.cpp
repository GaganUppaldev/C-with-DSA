//I have a stack file but in that we used stack library to perform  operations but here we will impliment it using class so this new file is created
//Implementaion of stack in array

#include <iostream>
using namespace std;

class stack{

private:
int* arr;
int top;
int maxsize;

public:
//constructor
stack(int size){
  arr = new int[size];
  maxsize = size;
  top = -1;
}

//function to add
void push(int value){
  if(top == maxsize - 1){
    cout << "Stack is full" << endl;
  }
  else{
    top++;
    arr[top] = value;
    cout << value << " pushed into the stack" << endl;
    
  }
}

};


int main(){
  cout<<"Implementation of stack using class : "<<endl;
  
  
}
