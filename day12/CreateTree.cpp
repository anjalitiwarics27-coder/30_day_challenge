#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(Node *root){
    if(root==nullptr) return ;
    inorder(root->left);
    cout<<root->data <<" ";
    inorder(root->right);
}
void postOrder(Node* root){
    if (root==nullptr) return ;
    postOrder(root->left); 
    postOrder(root->right);
    cout<<root->data<<" ";
}
void preorder(Node*root){
    if(root==nullptr) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    // create tree
    Node* root=new Node(1);
    root -> left=new Node(2);
    root ->right =new Node(3);
    root->left->left =new Node(4);
    root->left->right=new Node(5);
    // traversal 
    cout<<"Inorder : ";
    inorder(root);
    cout<<"\n";
    cout<<"PreOrder : ";
    preorder(root);
    cout<<"\n";
    cout<<"PostOrder :";
    postOrder(root);
}