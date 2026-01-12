#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t length = 3;
    size_t memoryReq = length * sizeof(int);

    printf("\naddress of length: %p", (void*)&length);
    printf("\nsizeof(int): %llu", sizeof(int));
    printf("\nmemoryReq: %lld", memoryReq);

    int* heapArray = (int*) malloc(memoryReq);

    for (size_t i = 0; i < length; i++) {
        heapArray[i] = (int)i*100;
    }
    for (size_t i = 0; i < length; i++) {
        printf("\nheapArray[%lld]: %d", i, heapArray[i]);
        printf("\n Address of heapArray at %lld: %p", i, (void*)&heapArray[i]);
    }

    free(heapArray);
    heapArray = NULL;

    return 0;
}