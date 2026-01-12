#include <stdio.h>
#include <stdlib.h>

int sum(int* arr, long size) {
    long total = 0;
    for (long i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() 
{
    long size;
    printf("Enter the number of elements for the integer array: ");
    scanf("%ld", &size);

    if (size < 0) {
        printf("\nSize cannot be negative.\n");
        return 1;        
    }

    int* array = (int*) malloc(size * sizeof(int));

    if (array == NULL) {
        printf("\nMemory allocation failed.\n");
        return 1;
    }

    printf("\nEnter %ld numbers: ", size);
    for (long i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nThe sum of the array elements is: %d", sum(array, size));


    free(array);
    array = NULL;

    return 0;
}
