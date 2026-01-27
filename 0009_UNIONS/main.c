#include <stdio.h>


union FloatUnion {
    float f;
    unsigned char bytes[sizeof(float)];
};


void printBytesHex(union FloatUnion* f) {
    for (int i = sizeof(float) - 1; i >= 0 ; i--) {
        printf("%02X ", (*f).bytes[sizeof(float)-i]);
    }
    printf("\n");
}

void printBits(union FloatUnion* f){
    char tmpChar;
    for (int i = sizeof(float) - 1; i >= 0; i--) {
        tmpChar = (*f).bytes[sizeof(float)-i];
        for (int b = 7; b >= 0; b--) {
            printf("%d ", (tmpChar >> b) & 1);
        }
    }
}


int main(void) 
{
    float floatUserInput;

    printf("Float-Wert eingeben: ");
    scanf("%f", &floatUserInput);

    union FloatUnion myUnion;
    myUnion.f = floatUserInput;

    printBytesHex(&myUnion);
    printBits(&myUnion);
    
    return 0;
}
