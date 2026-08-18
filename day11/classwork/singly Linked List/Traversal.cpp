#include<iostream>
using namespace std;
struct node{
    int data ;
    node*next;
};
int main(){
    // create nodes
    node * head =new node();
    node * second = new node();
    node * third =new node();
    // store nodes
    head->data =10;
    second->data =20;
    third->data=30;
    // connect nodes 
    head ->next=second ;
    second ->next=third;
    third ->next=NULL;
    //Traversal 
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   
    return 0;
}