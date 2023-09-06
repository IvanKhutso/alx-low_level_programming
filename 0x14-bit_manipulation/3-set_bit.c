#include "main.h" /* Include your header file here */

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: A pointer to the number in which to set the bit
 * @index: The index of the bit to set (0 for the least significant bit)
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    *n = (*n | (1 << index));
    return (1);
}

