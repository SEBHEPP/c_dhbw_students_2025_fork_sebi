#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "lib.h"

int main(void)
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    printf("is numeric: %d\n", isNumeric(character));
    printf("is alpha: %d\n", isAlpha(character));
    printf("is alpha numeric: %d\n", isAlphaNumeric(character));
    printf("is upper case: %d\n", isUpperCase(character));
    printf("is lower case: %d\n", isLowerCase(character));

    printf("to upper case: %c\n", toUpperCase(character));
    printf("to lower case: %c\n", toLowerCase(character));

    performeTestCases(); // These tests should not fail!

    return 0;
}
