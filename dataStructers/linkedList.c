#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void printReverse(Node *head);
void print(Node *head);
void addLast(Node **head,int data);
void addFirst(Node **head,int data);

int main(){
    Node *root = NULL;
    addLast(&root,15);
    addLast(&root,16);
    addLast(&root,17);
    addLast(&root,18);
    addLast(&root,19);
    addFirst(&root,14);
    print(root);

}


void addLast(Node **head,int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = data;
    if(*head == NULL){
        *head = newNode;
        return;
    }
    Node *iter = *head;
    while(iter->next != NULL){
        iter = iter->next;
    }
    iter->next = newNode;

}
void addFirst(Node **head,int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->next = *head;
    newNode->data = data;
    *head=newNode;
}
void printReverse(Node *head){
    if(head == NULL){
        return;
    }
    printReverse(head->next);
    printf(" %d ",head->data);
}
void print(Node *head){
    while(head != NULL){
        printf("-> %d ",head->data);
        head = head->next;
    }
}
void deleteNode(Node **head,int data){
    Node *current = *head;
    Node *prev;
    if(current->data == data){
        prev = *head;
        *head = (*head)->next;
        free(prev);
        return;
    }
    while(current != NULL){
        prev = current;
        current = current->next;
        if(current->data == data){
            printf("%d\n",current->data);
            prev->next = current->next;
            free(current);
            return;
        }
    }
    
}