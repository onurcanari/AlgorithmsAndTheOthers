#include <stdio.h>
#include <stdlib.h>
typedef struct Node { 
    int data; 
    struct Node* next; // Pointer to next node in DLL 
    struct Node* prev; // Pointer to previous node in DLL 
}Node;

void basaEkle(Node **head,int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    if(head == NULL){
        newNode->next = NULL;
        *head = newNode;
        return;
    }
    newNode->next = (*head);
    *head = newNode;
}
int main(){
    Node *root=NULL;
    basaEkle(&root,5);
    basaEkle(&root,6);
    basaEkle(&root,8);

    Node *head = root;
    while(head != NULL){
        printf("-> %d ",head->data);
        head = head->next;
    }
    
}