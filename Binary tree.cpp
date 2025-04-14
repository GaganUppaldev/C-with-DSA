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
  
//====================================================================================================================================
//Displaying value in recursive binary tree using traversal and queue

#include <iostream>
#include<queue>
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

void levelordertraversal(node* root){
  queue<node*>q;
  q.push(root);

  while(!q.empty()){
    node* temp = q.front();
    cout<<temp->data<<" ";
    q.pop();

    if(temp->left){
      q.push(temp->left);
      
    }

    if(temp->right){
      q.push(temp->right);
    }
  }
}
int main(){
  node* root = nullptr;
  
  root = buildtree(root); 

  cout<<"printing the level order traversal"<<endl;
  levelordertraversal(root);

  

  return 0;
}


  

  return 0;
}

//=====================================================================================================================================
//Final and complete binary tree
//till now we only was only left to get binary tree in its orginal form to disalay , till now output is 2 1 4 but we want 
/*
2
3  4
*/
//Sepraters will solve our problem so lets do it 

#include <iostream>
#include<queue>
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

void levelordertraversal(node* root){
  if (root == nullptr) {
      return;
  }
  queue<node*>q;
  q.push(root);
  q.push(nullptr);

  while(!q.empty()){
    node* temp = q.front();
    //cout<<temp->data<<" ";
    q.pop();

    //seprator 
    if(temp == nullptr){
      //end of level
      cout<<endl;
      if(!q.empty()){
        q.push(nullptr);//another seprator if queue is not empty
      }
    
      
    }else{
      cout<<temp->data<< " ";
      if(temp->left){
        q.push(temp->left);
      }

      if(temp->right){
        q.push(temp->right);
      }
    }

/*  if(temp->left){
      q.push(temp->left);
      
    }

    if(temp->right){
      q.push(temp->right);
    }*/
  }
}
int main(){
  node* root = nullptr;
  
  root = buildtree(root); 

  cout<<"printing the level order traversal"<<endl;
  levelordertraversal(root);

  

  return 0;
}

//====================================================================================================================================
/*
Types of travsals
Inorder -->LNR (left , node , right)
Preorder-->NLR (node , left , right)
Post order-->LRN (left right node)

*/

// =============================BASIC BINARY TREE REVISION ==============================================================
#include <iostream>
using namespace std ;
class tree {
    public:
    int data ;
    tree* left;
    tree* right;
    
    //constructor 
    tree (int value){
        data = value ;
        left = nullptr ;
        right = nullptr ;
        
    }
};
    int main () {
    cout << "Basic Binary tree " << endl ;
    //next part soon
}
