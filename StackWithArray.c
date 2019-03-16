#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

// stack için kullanılan bir struct yapısı
typedef struct Stack{
    int top;
    unsigned capacity;
    int* array;
}Stack;

// verilen kapasitede bir Stack yapısı oluşuturyoruz.
Stack* createStack(unsigned capacity){
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array =(int*)malloc(stack->capacity * sizeof(int));
}
int isFull(Stack* stack){
    return stack->top == stack->capacity - 1;
}
int isEmpty(Stack* stack){
    return stack->top == -1;
}
// stack'e ekleme yapar.
void push(Stack* stack, int item){
    if(isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("\n%d stack'e eklendi.",item);
}
int pop(Stack* stack){
    if(isEmpty(stack))
        return -1;
    return stack->array[stack->top--];
}
int main(){

    Stack *stack = createStack(5);
    push(stack,10);
    push(stack,20);
    push(stack,30);
    printf("\n%d",pop(stack));

}