//Basic structure for linked list :
//Linked list 

#include<iostream>
using namespace std;

class node {
public:
	int data; //line 7 data
  node* next;







};


int main(){
  //object of class node

  node* nd1 = new node();

  cout<<nd1 -> data<<endl;//garbage value 
  cout<<nd1 -> next<<endl;//garbage value
  
}
