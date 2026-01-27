#include <stdio.h>

int main(void)
{
    int aValue = 42;
    int* myPointer = &aValue;

    printf("Initial value: \t\t\t\t\t%d\n", aValue);
    printf("Value through pointer: \t\t\t\t%d\n", *myPointer);

    *myPointer = 20;

    printf("Modified value of aValue through myPointer: \t%d\n\n", *myPointer);

    int* yourPointer = myPointer;
    *yourPointer = 5;

    printf("Address of aValue: \t\t\t%X\n", &aValue);
    printf("Address of aValue using myPointer: \t%X\n", myPointer);
    printf("Address of aValue using yourPointer: \t%X\n", yourPointer);

    return 0;
}
