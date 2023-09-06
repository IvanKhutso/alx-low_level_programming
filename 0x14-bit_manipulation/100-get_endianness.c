#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    unsigned int test = 1;
    char *endian_check = (char *)&test;

    if (*endian_check == 1)
        return (1); /* Little Endian */
    else
        return (0); /* Big Endian */
}

