#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node{
    int value;
    struct Node *left,*right;
}Node;

Node* insert(Node *root,int v){
    if(root == NULL){
        root = malloc(sizeof(Node));
        root->value = v;
        root->left = NULL;
        root->right = NULL;
    } else if (v < root->value){
        root->left = insert(root->left, v);
    } else {
        root->right = insert(root->right, v);
    }
    return root;
}

void traverse(Node *root){
    if(root == NULL){
        return;
    }
    traverse(root->left);
    traverse(root->right);
}

int main()
{
    Node *root = NULL;
    const int SIZE = 2000000;
    int *a = malloc(sizeof(int)*SIZE);
    clock_t start, end;

    printf("Generating random array with %d values...\n",SIZE);
    
    start = clock();

    for(int i=0;i<SIZE;i++){
        a[i] = rand() % 10000;
    }

    end = clock();
    free(a);

    printf("Done. Took %f seconds\n\n", (double)(end-start) / CLOCKS_PER_SEC);
    printf("Traversing all %d nodes in tree...\n",SIZE);

    start = clock();
    traverse(root);
    end = clock();
    free(root);

    printf("Done. Took %f seconds\n\n", (double)(end-start) / CLOCKS_PER_SEC);

    return(EXIT_SUCCESS);
}   
