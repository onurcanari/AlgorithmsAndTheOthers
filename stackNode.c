#include <stdio.h>
#include <stdlib.h>


typedef struct SNode{
    int data;
    struct SNode *next;
}SNode;

SNode *createNewNode(int data){
    SNode *snode = (SNode*)malloc(sizeof(SNode));
    snode->next=NULL;
    snode->data=data;
    return snode;
}
void push(SNode **root,int data){
    SNode *snode = createNewNode(data);
    snode->next = (*root);
    (*root) = snode;
}
int pop(SNode **root){
    if(*root == NULL) return -1;
    SNode *temp = *root;
    (*root) = (*root)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}
int main(){
    SNode *root = NULL;
    push(&root,5);
    push(&root,6);
    push(&root,7);
    printf("%d\n",pop(&root));
    printf("%d\n",root->data);
    printf("%d\n",pop(&root));
    printf("%d\n",root->data);
    printf("%d\n",pop(&root));
    printf("%d",root->data);

}