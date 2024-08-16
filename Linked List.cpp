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



