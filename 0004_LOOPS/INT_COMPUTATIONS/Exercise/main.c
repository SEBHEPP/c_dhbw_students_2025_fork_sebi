#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint32_t inputNumber = 0;

    printf("Please enter a unsinged integer: ");
    scanf("%u", &inputNumber);

    // sum of digits
    uint32_t numDigits = 0;
    uint32_t tmpNum = inputNumber;
    while (tmpNum > 0) {
        numDigits++;
        tmpNum /= 10;
    }

    printf("sum of digits: %u\n", numDigits);

    // cross sum
    uint32_t crossSum = 0;
    for (uint32_t i = 0; i < numDigits; i++) {
        crossSum += inputNumber % 10;
        inputNumber /= 10;
    }

    printf("crossSum: %u\n", crossSum);

    return 0;
}
