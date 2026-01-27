#include <stdio.h>


void printMemoryAddressAndValue(float* floatPtr) {
    printf("Value of float: %.2f\n", *floatPtr);
    printf("Address of float: %p\n", (void*)floatPtr);
    
}

float addValue(float num, float userInput){
    return num + userInput;
}


int main(void)
{
    float myFloat = 42.42f;

    printMemoryAddressAndValue(&myFloat);

    float userInput = 0.0f;
    printf("Enter a value (float) to add: ");
    scanf("%f",&userInput);

    float newValue = addValue(myFloat, userInput);
    printMemoryAddressAndValue(&newValue);

    return 0;
}
