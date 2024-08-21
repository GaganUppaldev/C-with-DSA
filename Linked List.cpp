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


//Proper singly linked list ===========================================================================================================
#include<iostream>
using namespace std;

class single {
public:
    int data;
    single *next; // Pointer to the next node in the linked list

    // Constructor to initialize node data
    single(int value) : data(value), next(nullptr) {}
};

// Function to print the linked list
void printList(single *head) {
    single *current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Create nodes
    single *head = new single(1); // First node with data = 1
    single *second = new single(2); // Second node with data = 2
    single *third = new single(3); // Third node with data = 3

    // Link nodes
    head->next = second; // First node points to the second node
    second->next = third; // Second node points to the third node
    third->next = nullptr; // Third node points to nullptr

    // Print the linked list
    cout << "Linked List: ";
    printList(head);

    // Clean up memory
    delete head;
    delete second;
    delete third;

    return 0;
}

//======================================================================================================================================
//Basic Double Linked list -:
#include <iostream>
using namespace std;

class node {
public:
  int data;
  node *next;
  node *back;

  //constructor 
  node(int d){
    this->data  = d;
    this->next = nullptr;
    this->back = nullptr;
  }


};



//print function 

int print(node* head){
  node* temp = head;
  if (temp != nullptr){
    cout << temp->data << " ";
    temp = temp->next;
  }
  return 0;
}


int main (){
  node*  node1 = new node(10);
  node * head = node1;

  print(head);
}

//======================================================================================================================================
//Double linked list 
#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;

public:
    // Constructor
    DoublyLinkedList() {
        head = nullptr;
    }

    // Insert at the front
    void insertFront(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Insert at the end
    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    // Display the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertFront(10);
    dll.insertEnd(20);
    dll.insertEnd(30);
    dll.insertFront(5);

    cout << "Doubly Linked List: ";
    dll.display();

    return 0;
}

//=====================================================================================================================================
//Double linked list in easier way for beginner
#include <iostream>
using namespace std;
class doublell{
public:
int data;
doublell *prev;
doublell *next;


//constructor
doublell(int value){
    this->data = value;
    this->prev = nullptr;
    this->next = nullptr;
    
}

};

void print(doublell *node1){
    doublell *current = node1;{
        while(current != nullptr){
            cout<<"||"<<current->data<<"";
            cout<<current->next<<"-";
            cout<<current->prev<<"-";
            if(current->next == nullptr ||current->next == nullptr){
                cout<<"Null"<<endl;

                
            }

            current = current->next;
        }
    }
    
}

int main(){
    cout<<"double linked list"<<endl;

    //creating a new node
    doublell *node1 = new doublell(10);
    doublell *node2 = new doublell(100);
    doublell *node3 = new doublell(1000);

    //linking nodes

    node1->next = node2;
    node2->prev = node1;

    node2->next = node3;
    node3->prev = node2;

    
    node3->next = nullptr;

    print(node1);
//=======================================================================================================================================
//Circular linked list code for beginner to understand Basic



#include <iostream>
using namespace std;
class circle{
public:
int data;
circle *next;

//constructor
circle(int value) : data(value) , next(nullptr){};

};

//printing function
void print(circle *node1){
    circle  *temp = node1;
    while(temp!=nullptr){
        cout<<temp->data<<" |";
        cout<<temp->next<<" | ";
        temp = temp->next;
    }
    
    
}


int main (){
    cout<<"Circular single linked list "<<endl;
    //creating node 
    circle *node1 = new circle(10);
    //linking a node
    node1->next = node1;
    node1->next = nullptr;

    print(node1);
    
    delete node1;
    
}

//====================================================================================================================================
//Max concepts are over And here is nothing special
//Make linked list with characters

#include <iostream>
using namespace std;
class node{
public:
char data;
node* next; //defined pointer named next

//constructor

node(char value) : data(value) , next(nullptr){}


};

void print(node *node1){
  node *current = node1;
  while(current != nullptr){
    cout << current->data << "->";
    current = current->next;
  }
  
}

/*void reverse(node *node1){
  node *current = node1;
}*/
int main(){
  cout<<"Main linked list"<<endl;
  //creating node
  node *node1 = new node('x');
  node *node2 = new node('y');
  node *node3 = new node('A');
  node *node4 = new node('B');


  

  //linking nodes
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next=nullptr;

  print(node1);
 
}
	
   
    
    
}


