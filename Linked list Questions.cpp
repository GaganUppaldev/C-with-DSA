//<Question 1 >
//reverse linked list 

#include<iostream>
using namespace std;

class node {
public:
int data;
node* next;

//const
node(int value) : data(value), next(nullptr) {};

};

void print(node *node1){
  node *current = node1;
  while(current != nullptr){
    cout << current->data << " ";
    current = current->next;
  }
}

node* reverse(node* head){
  node* prev = nullptr;
  node* current = head;
  node* forward = nullptr;

  while(current != nullptr){
    forward = current->next;
    current->next=prev;
    prev = current;
    current = forward; //move to next node
  }
  return prev;
  
}



int main (){
  cout<<"main linked list"<<endl;
  //create node 
  node *node1 = new node(10);
  node *node2 = new node(20);
  node *node3 = new node(30);

  //linkng
  node1->next = node2;
  node2->next = node3;
  node3->next = nullptr;

  print(node1);

  cout<<endl;
  
  node* reversedHead = reverse(node1);

  cout<<"reversed linked list"<<endl;

  print(reversedHead);

  return 0;
  
  



  
  
}
