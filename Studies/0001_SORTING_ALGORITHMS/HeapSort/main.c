#include <stdlib.h>
#include <stdio.h>


int maxIndex(int a1, int a2, int a3) {
    int i = 0;
    int biggest = a1;

    if (a2 > biggest) {
        i = 1;
        biggest = a2;
    }
    if (a3 > biggest) {
        i = 2;
        biggest = a3;
    }
    return i;
}


void siftDown(int* array, int i, int n) {
    int l = array[2*i+1];
    int r = array[2*i+2];
    int largest = i;
    while (1) {
        if (l < n && array[])
    }
}


void heapSort(int* array, int n) {
    n++;
    if (n > 1) {
        maxifyHeap(array, n-2);
        heapSort(array, n-2);
    } 
}


void printArray(int* array, int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d, ", array[i]);
    }
    printf(" ]\n\n");
}


int main(void) {
    int arr[15] = {42, -7, 13, 99, 0, 56, -23, 8, 71, 4, -1, 65, 17, -42, 29};
    printArray(arr, 15);

    maxifyHeap(arr, 15);
    printArray(arr, 15);

    return 0;
}
