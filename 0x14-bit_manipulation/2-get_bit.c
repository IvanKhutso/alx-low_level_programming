#include "main.h" /* Include your header file here */

/**
 * get_bit - returns the value of a bit at a given index
 * @n: The number to retrieve the bit from
 * @index: The index of the bit to get (0 for the least significant bit)
 *
 * Return: The value of the bit at the given index or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /* Check if index is greater than the number of bits in unsigned long int */
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    /* Shift n to the right by the index positions and check the least significant bit */
    return ((n >> index) & 1);
}

