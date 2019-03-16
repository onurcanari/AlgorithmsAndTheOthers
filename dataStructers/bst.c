#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node{
    int key;
    node *left, *right;
};

node* newNode(int data){
    node *temp = (node*)malloc(sizeof(node));
    temp->key = data;  
    temp->left = temp->right = NULL;
}
void inorder(node *root){
    if(root != NULL){
        inorder(root->left);
        printf("%d \n",root->key);
        inorder(root->right);
    }
}
node* insert(node *node, int key){
    if(node == NULL) return newNode(key);
    if(key<node->key)
        node->left = insert(node->left,key);
    else if(key>node->key)
        node->right = insert(node->right,key);
    return node;
    
}
int main(){
    struct node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
    inorder(root);


    
}