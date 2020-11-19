#include <iostream>
using namespace std;

typedef struct node{
    int data;
    node* next;
}node;

node* insertStartNode(node* head, int data){
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

node* insertNodePosition(node* head, int data, int position){
    node* temp = (node*)malloc(sizeof(node));
    node* nod = (node*)malloc(sizeof(node));
    node* curr = (node*)malloc(sizeof(node));
    temp = head;
    nod->data = data;
    int counter = 1;
    
    if(head == NULL){
        temp->data = data;
    }
    else{
        while(counter != position-1){
            temp = temp->next;
            counter++;
        }
        curr = temp->next;
        temp->next = nod;
        nod->next = curr;
    }
    return head;
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
    int n, i, pos, val, choice;
    node* root = NULL;
    
    cout << "Enter Number of Elements(>0): ";
    cin >> n;
    
    for(i = 0; i < n; i++){
        cout << "Enter Numeric Value: ";
        cin >> val;
    
        cout << "Enter Choice: " << endl << "1 - Insert at Position" << endl << "2 - Insert at Beginning" << endl << "3 - Insert at End" << endl;
        cin >> choice;
    
        switch(choice){
            case 1:
                cout << "Enter Position(Not Index :) ): ";
                cin >> pos;
                root = insertNodePosition(root, val, pos);
                break;
            
            case 2:
                root = insertStartNode(root, val);
                break;
            
            case 3:
                root = insertEndNode(root, val);
                break;
            
            default:
                traverseLL(root);
                break;
        }
    }
    traverseLL(root);
    return 0;
}
