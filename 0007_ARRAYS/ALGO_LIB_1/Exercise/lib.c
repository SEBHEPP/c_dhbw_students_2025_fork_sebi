#include <stdbool.h>
#include <stdint.h>

#include "lib.h"

bool allOf(int32_t *array, size_t length, int32_t value)
{
    for (size_t i = 0; i < length; i++) {
        if (array[i] != value) {
            return false;
        }
    }
    return true;
}

bool anyOf(int32_t *array, size_t length, int32_t value)
{
    for (size_t i = 0; i < length; i++) {
        if (array[i] == value) {
            return true;
        }
    }
    return false;
}

bool noneOf(int32_t *array, size_t length, int32_t value)
{
    return !anyOf(array, length, value);
}

size_t count(int32_t *array, size_t length, int32_t value)
{
    size_t c = 0;

    for (size_t i = 0; i < length; i++) {
        if (array[i] == value) {
            c++;
        }
    }
    return c;

}
