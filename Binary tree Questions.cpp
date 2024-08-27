//HERE I will do question based on Binary tree :


//<Question 1>
//Find the Height of a Binary Tree

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int findHeight(Node* root) {
    // Base case: If the tree is empty, return -1
    if (root == nullptr) {
        return -1;
    }

    // Recursively find the height of left and right subtrees
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);

    // The height of the current node is the maximum of the heights of its subtrees + 1
    return max(leftHeight, rightHeight) + 1;
}

int main() {
    // Constructing the following binary tree
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "Height of the binary tree is: " << findHeight(root) << endl;

    return 0;
}

