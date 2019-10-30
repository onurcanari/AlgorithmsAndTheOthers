#include <time.h>
#include <stdlib.h>
#include <stdio.h>


/*
    This functions creates array with random numbers.
    If range given 1 then all values in array will be 0.
*/
int* create_array(int size,int range){
    int i;
    

    int *array = (int *)malloc(sizeof(int) * size);

    srand(time(NULL));

    for(i=0;i<size;i++)
        *(array+i)= rand() % range;

    return array;
}

/*
    Prints all elements in int array.
*/
void print_array(int arr[],int size){
    printf("Array elements:\n");
    int i;
    for(i = 0; i < size; i++)
        printf("%d ",*(arr+i));
    
    printf("\n-------------------------------\n");
}