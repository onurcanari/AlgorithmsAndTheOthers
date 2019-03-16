#include <stdlib.h>
#include <stdio.h>
typedef struct QNode{
    int data;
    struct QNode *next;
}QNode;

typedef struct Queue{
    QNode *front, *rear;
}Queue;

void enQueue(Queue *root,int data);
QNode *deQueue(Queue *q);
QNode *newNode(data);
Queue *createQueue();

void enQueue(Queue *root,int data){
    QNode *qnode = newNode(data);
    if(root->front == NULL){
        root->front = root->rear = qnode;
        return;
    }
    root->rear->next = qnode; 
    root->rear = root->rear->next;
}
QNode *deQueue(Queue *q){
    if(q == NULL){
        return NULL;
    }
    QNode *temp = q->front;
    q->front = q->front->next;
    if(q->front == NULL){
        q->rear == NULL;
    }
    return temp;
}
QNode *newNode(data){
    QNode *qnode = (QNode*)malloc(sizeof(QNode));
    qnode->data = data;
    qnode->next = NULL;
    return qnode;
}
Queue *createQueue(){
    Queue *q = (Queue*)malloc(sizeof(Queue));
    q->front = NULL;
    q->rear = NULL;
    return q;
}

int main(){
    Queue *main = createQueue();
    enQueue(main, 5);
    enQueue(main, 6);
    printf("%d\n",deQueue(main)->data);
    enQueue(main,7);
    printf("%d\n",deQueue(main)->data);
    printf("%d\n",deQueue(main)->data);
    
}