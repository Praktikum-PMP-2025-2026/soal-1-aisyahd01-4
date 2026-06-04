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
    
    temp->next=newNode;
}


void Delete (int x){
    Node *temp = head;
    Node *prev = NULL;

    while(temp!=NULL && temp->data!=x){
        prev=temp;
        temp=temp->next;
    }
    
    if (temp==NULL) {
        return;
    }
    if (prev==NULL){ 
        head= head->next;
    }
    else {
        prev->next=temp->next;}

    free(temp);
}

void Find (int x) {
    Node *temp=head;
    int posisi=0;

    while (temp!=NULL) {
        if (temp->data==x) {
            printf("FOUND %d\n", posisi);
            return;
        }
        temp =temp->next;
        posisi++;
    }

    printf("NOT FOUND\n");
}

void printList (){
    if (head==NULL){
        printf("LIST EMPTY\n");
        return;
    }

    printf ("LIST");  
    Node *temp=head;
    while (temp!=NULL) {
        printf(" %d", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main (){
    int Q;
    scanf ("%d", Q);

    for (int i=0; i<Q; i++){
        int op, x;
        scanf ("%d %d", &op, &x);

        if (op==1){
            pushFront(x);
        }
        else if (op==2){
            pushBack(x);
        }
        else if (op==3){
            Delete(x);
        }
        else if (op==4){
            Find (x);
        }
    }

    printList();

    return 0;
}










    

    

