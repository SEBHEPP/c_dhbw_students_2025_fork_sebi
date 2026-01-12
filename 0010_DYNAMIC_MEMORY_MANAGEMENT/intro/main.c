#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t length = 3;
    size_t memoryReq = length * sizeof(int);

    printf("\naddress of length: %p", (void*)&length);
    printf("\nsizeof(int): %llu", sizeof(int));
    printf("\nmemoryReq: %lld", memoryReq);

    return 0;
}