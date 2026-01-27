#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    // is numeric
    if (isnumber(character)) {
        printf("Character is numeric\n");
    }

    // is upper case
    if (isupper(character)) {
        printf("Character is upper case\n");
    }

    // is lower case
    if (islower(character)) {
        printf("Character is lower case\n");
    }

    // is alpha
    if (isalpha(character)) {
        printf("Character is alpha\n");
    }

    // is alpha numeric
    if (isalnum(character)) {
        printf("Character is alpha numeric\n");
    }

    // to upper case
    if (isalpha(character)) {
        printf("Character in upper: %c\n", toupper(character));
    }

    // to lower case
    if (isalpha(character)) {
        printf("Character in lower: %c\n", tolower(character));
    }
    

    return 0;
}
