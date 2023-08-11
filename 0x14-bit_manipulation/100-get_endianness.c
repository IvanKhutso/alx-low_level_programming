#include "main.h"

/**
 * check_endianness - determines the endianness of a machine
 * Return: 0 for big endian, 1 for little endian
 */

int check_endianness(void)
{
    unsigned int i = 1;
    char *c = (char *) &i;

    return (*c);
}
