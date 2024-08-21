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

/*
here i tried to explain each step logic
while(current!=nullptr){
    forward = current->next;//n1->n2 [n2] ,n2->n3 [n3]
    current->next = prev; // [n2] = prev, [n3] = prev
    prev = current; //prev = n1, prev = n2
    current = forward; //n1->n2 = n2, n2->n3 = n3
  }
    return prev;
*/

//====================================================================================================================================================================================
//<QUESTION 2> 
//reverse the linked list kth Group
//Recursion is need to solve this problem
#include <iostream>
using namespace std;

class node {
public:
    char data;
    node* next;

    // Constructor
    node(char value) : data(value), next(nullptr) {}
};

// Function to print the linked list
void print(node *head) {
    node *current = head;
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) cout << "->";
        current = current->next;
    }
    cout << endl;
}

// Function to reverse a segment of k nodes
node* reverseKGroup(node* head, int k) {
    node *current = head;
    node *prev = nullptr;
    node *next = nullptr;
    int count = 0;

    // Check if there are at least k nodes left in the list
    node *temp = head;
    while (temp != nullptr && count < k) {
        temp = temp->next;
        count++;
    }
    if (count < k) return head; // If there are less than k nodes, no need to reverse

    // Reverse k nodes
    count = 0;
    while (current != nullptr && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    // Recur for the remaining nodes
    if (next != nullptr) {
        head->next = reverseKGroup(next, k);
    }

    // Prev is the new head of the reversed segment
    return prev;
}

int main() {
    cout << "Main linked list" << endl;

    // Creating nodes
    node *node1 = new node('x');
    node *node2 = new node('y');
    node *node3 = new node('A');
    node *node4 = new node('B');

    // Linking nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = nullptr;

    print(node1);

    cout << "Reversed linked list in groups of 2" << endl;
    node* reversed = reverseKGroup(node1, 2);
    print(reversed);

    return 0;
}
