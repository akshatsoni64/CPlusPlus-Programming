#include <iostream>
using namespace std;

typedef struct node{
    int data;
    node* next;
}node;

node* insertNode(node* head, int data){
    node* temp = (node*)malloc(sizeof(node));
    if(head == NULL){
        temp->data = data;
    }
    else{
        temp->data = data;
        temp->next = head;
    }
    return temp;
}

node* insertEndNode(node* head, int data){
    node* temp;
    node* nod = (node*)malloc(sizeof(node));
    temp = head;
    if(head == NULL){
        temp->data = data;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        nod->data = data;
        nod->next = NULL;
        temp->next = nod;
    }
    return head;
}

void traverseLL(node* head){
    node* temp = (node*)malloc(sizeof(node));
    temp = head;
    while(temp != NULL){
        cout << "Node Data: " << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    node* root = NULL;
    root = insertNode(root, 5);
    root = insertNode(root, 4);
    root = insertEndNode(root, 6);
    traverseLL(root);
    return 0;
}
