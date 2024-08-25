//This File is made to add Binary tree basic to advance logic  and questions will be in other file .

//Basic Binary tree with current knowledge
#include <iostream>
using namespace std;

class node{

public:
int data;
node* left;
node* right;

node(int key){
  data = key;
  left = nullptr;
  right = nullptr;

}



};

void preordertraversal(node* root){
  if(root == nullptr){
    return;
  }
  cout<<root->data<<" ";
  preordertraversal(root->left);
  preordertraversal(root->right);
  
}

int main(){

  node* first = new node(10);
  node* second = new node(20);
  node* third = new node(30);

  node* forth = new node(40);

  //linking nodes
  first->left=second;
  first->right=third;

  second->left=forth;
  

  preordertraversal(first);
}
