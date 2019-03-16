#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;


void addLast(Node **href,int data){

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if(href == NULL){
        *href = newNode;
        return;
    }
    Node *last = *href;
    while(last->next != NULL)
        last = last->next;

    last->next = newNode;
    
}

void addFirst(Node **root,int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *root;
    *root = newNode;
}


void printList(Node *head){
    while(head != NULL){
        printf("-> %d ",head->data);
        head = head->next;
    }
}
int main(){
    
    Node *root = NULL;
    addFirst(&root,6);
    addFirst(&root,5);
    addLast(&root,7);
    addLast(&root,8);
    printList(root);

}

