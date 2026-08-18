#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    // Create nodes
    node* head = new node();
    node* second = new node();
    node* third = new node();

    // Store data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    // Create new node
    node* newNode = new node();
    newNode->data = 80;

    // Find node containing 20
    node* temp = head;

    while(temp->data != 20) {
        temp = temp->next;
    }

    // Insert 80 after 20
    newNode->next = temp->next;
    temp->next = newNode;

    // Traversal
    temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}