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

//======================================================================================================================================
//Recursive Binary Tree Creation 
//it make Binary tree by taking inputs and use recursion 
#include <iostream>
using namespace std;

class node{

public:
int data;
node* left;
node* right;

node(int d){
  this->data=d;
  this->left=nullptr;
  this->right=nullptr;
}


};

node* buildtree(node* root){
  cout<<"enter the data"<<endl;
  int data;
  cin>>data;
  root=new node(data);

  if (data == -1){
    return nullptr;
  }

  cout<<"enter data for inserting in left of "<<data<<endl;
  root->left=buildtree(root->left);

  cout<<"enter data for inserting in right of "<<data<<endl;
  root->right=buildtree(root->right);

  return root;
}
int main(){
  node* root = nullptr;
  
  root = buildtree(root); 
  

  

  return 0;
}


