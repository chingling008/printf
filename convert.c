#include "main.h"
#include <stdlib.h>
/**
 * convert - This function converts a number and base into a string representation
 */
char *convert(unsigned long int num, int base, int lowercase)
{
    static char buffer[50];
    char *ptr = &buffer[49];
    *ptr = '\0';
    
    char *rep = (lowercase)
        ? "0123456789abcdef"
        : "0123456789ABCDEF";
    
    do {
        *--ptr = rep[num % base];
        num /= base;
    } while (num != 0);

    return ptr;
}