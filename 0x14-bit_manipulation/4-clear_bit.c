#include "main.h" 

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: A pointer to the number in which to clear the bit
 * @index: The index of the bit to clear (0 for the least significant bit)
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    *n = (*n & ~(1 << index));
    return (1);
}

