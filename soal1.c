#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void pushFront(int x) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

void pushBack (int x) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data=x;
    newNode->next= NULL;
    
    if (head==NULL){
        head=newNode;
        return;
    }
    Node *temp= head;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    
    




}
