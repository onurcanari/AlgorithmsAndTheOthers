#include <stdio.h>

void insertionSort(int arr[], int n);
void printArray(int arr[],int n);

int main(int argc, char const *argv[]){
    int arr[] = {5,2,4,342,64,321,98};
    printArray(arr,sizeof(arr)/sizeof(int));
    insertionSort(arr,sizeof(arr)/sizeof(int));
    printArray(arr,sizeof(arr)/sizeof(int));
    return 0;
}
void insertionSort(int arr[], int n){
    int i, key, j;
    for(i=1;i<n;i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}
void printArray(int arr[],int n){
    int i;
    for(i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");
}