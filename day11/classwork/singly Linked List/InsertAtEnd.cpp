#include <iostream>
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

    // Insert Node at End
    node* newNode = new node();
    newNode->data = 80;
    newNode->next = NULL;

    node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    // temp is now pointing to last node
    temp->next = newNode;

    // Traversal
    temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}