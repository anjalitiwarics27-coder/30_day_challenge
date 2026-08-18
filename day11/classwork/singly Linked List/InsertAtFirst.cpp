#include<iostream>
using namespace std;
struct node {
    int data;
    node * next;
};
int main(){
    // create node 
    node*head = new node ;
    node*second=new node;
    node*third=new node;
    // store data 
    head ->data= 10;
    second->data = 20;
    third->data =30;
    // connect 
    head ->next=second;
    second->next=third;
    third->next=NULL;
    // create a new node 
    node * newNode= new node();
    newNode->data =90;
    newNode->next=NULL;
    // new node connection 
    node * temp;
    while(temp!=10){
        temp=temp->next;
    }
    // conect
    temp
}