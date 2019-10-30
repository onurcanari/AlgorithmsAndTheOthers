#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>

#include "my_array_functions.h"

#define SIZE 10

void merge(int A[], int p, int q, int r);
void merge_sort(int A[], int p, int r);

int main()
{
    int *arr = create_array(SIZE, 100);
    print_array(arr, SIZE);

    merge_sort(arr, 0, SIZE-1);
    print_array(arr, SIZE);

    free(arr);
    return 0;
}

void merge(int A[], int p, int q, int r)
{
    int i, j, k;

    int n1 = q - p + 1;
    int n2 = r - q;

    int *L = (int *)malloc(sizeof(int) * (n1 + 1));
    int *R = (int *)malloc(sizeof(int) * (n2 + 1));

    for (i = 0; i < n1; i++)
    {
        L[i] = A[p + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = A[q + j + 1];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    i = 0;
    j = 0;

    for (k = p; k < r + 1; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }
}

void merge_sort(int A[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = floor((p + r) / 2);
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}