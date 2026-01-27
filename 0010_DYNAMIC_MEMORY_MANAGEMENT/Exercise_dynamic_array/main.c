#include <stdio.h>
#include <stdlib.h>


int sum(int* array, size_t n) {
    int s = 0;
    for (size_t i = 0; i < n; i++) {
        s += array[i];
    }
    return s;
}


int main(void) 
{
    size_t n;
    
    printf("Enter the number of elements: ");
    scanf("%lu", &n);

    if (n <= 0) {
        printf("Invalid input! The number of elements must be greater than zero");
        return -1;
    }

    int* arr = (int*)malloc(n*sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!");
        return -1;
    }

    printf("Enter %lu elements: ", n);
    for (size_t i = 0; i < n; i++) {
        scanf("%d", &(arr[i]));
    }

    printf("The sum of the array elements is: %d", sum(arr, n));

    free(arr);

    return 0;
}
