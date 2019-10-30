#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "my_array_functions.h"


#define SIZE 10

void insertion_sort(int arr[]);


int main(int argc, char const *argv[]){

    int *arr = create_array(SIZE,200);

    srand(time(NULL));
    clock_t start,end;
    
    
    print_array(arr,SIZE);
    start = clock();
    insertion_sort(arr);
    end = clock();
    float elapsedTime = (end-start)/CLOCKS_PER_SEC;
    
    printf("Elapsed Time: %f \n",elapsedTime);
    
    
    print_array(arr,SIZE);
    free(arr);
    return 0;
}

void insertion_sort(int arr[]){
    int i, j, key;
    for(i=1;i<SIZE;i++){
        key = arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}
