#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node* left;
  Node* right;
  Node(int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
};

void inorder(Node* root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<(root->data)<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root==nullptr) return;
    cout<<(root->data)<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root==nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout<<(root->data)<<" ";
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    cout<<"Inorder:";
    inorder(root);
    cout<<endl;
    cout<<"Preorder:";
    preorder(root);
    cout<<endl;
    cout<<"Postorder:";
    postorder(root);
    cout<<endl;
    return 0;
}