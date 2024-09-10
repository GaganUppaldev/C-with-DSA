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

//<QUESTION 3>
//Create two linked by getting input than add them in this way 1st element of 1st linked list with 1st element of second linked list  
//Linked list 1 = 5 , 4 ,3
//Linked list 2 = 5 ,4, 3
//output  = 0 9 6 

//important point is be aware about how we calculate in maths like first elements got added first

#include <iostream>
using namespace std;

class list {
public:
int data;
list *next;

//getting value inside list

list(int value) : data(value) , next(nullptr) {}

};

void printlist(list *head){
   list *current = head;
   while(current!=nullptr){
      
      cout<<current->data<<"->";

      current = current->next;
      
      
   }
   cout<<"nullptr"<<endl;
}

void sum(list *head, list* head2) {
    list *current = head;
    list *current2 = head2;
    int carry = 0;  // Variable to hold the carry value

    while (current != nullptr || current2 != nullptr || carry != 0) {
        int sum = carry;  // Start with carry from previous step

        if (current != nullptr) {
            sum += current->data;  // Add current node's data from first list
            current = current->next;
        }

        if (current2 != nullptr) {
            sum += current2->data;  // Add current node's data from second list
            current2 = current2->next;
        }

        carry = sum / 10;  // Calculate carry for the next iteration
        int digit = sum % 10;  // Extract the digit to be printed

        cout << digit << "->";  // Print the result of the sum
    }

    cout << "nullptr" << endl;  // Indicate the end of the linked list
}

void deleteList(list* &head) {
    while (head != nullptr) {
        list* temp = head;  
        head = head->next;  
        delete temp;       
    }
}




int main(){ 
   cout<<"linked list 1"<<endl;
   //putting value inside list

   cout<<"head element"<<endl;
   int x;
   cin>> x;

   cout<<"first element"<<endl;
   int y;
   cin>> y;

   cout<<"second element"<<endl;
   int z;
   cin>> z;

   list *head = new list(x);
   list *first = new list(y);
   list *second= new list(z);

   head->next = first;
   first->next = second;
   second -> next = nullptr;
   

   printlist(head);

   cout<<endl;

   cout<<"linked list 2"<<endl;
   
   cout<<"head element"<<endl;
   int a;
   cin>> a;

   cout<<"first element"<<endl;
   int b;
   cin>> b;

   cout<<"second element"<<endl;
   int c;
   cin>> c;
   list *head2 = new list(a);
   list *first2 = new list(b);
   list *second2 = new list(c);

   head2->next = first2;
   first2->next = second2;
   second2->next = nullptr;

   printlist(head2);

   cout<<endl;
   cout<<"final sum list"<<endl;
   sum(head , head2);

   
   deleteList(head);
   deleteList(head2);

   


   
}
      
