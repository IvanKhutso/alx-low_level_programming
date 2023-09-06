#include "main.h" /* Include your header file here */
#include <stdio.h> /* For the putchar function */

/**
 * print_binary - prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
    /* Initialize a mask with the most significant bit set to 1 */
    unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
    int started_printing = 0; /* Flag to ignore leading zeros */

    if (n == 0)
    {
        putchar('0');
        return;
    }

    while (mask > 0)
    {
        /* Check if the current bit is set */
        if ((n & mask) != 0)
        {
            putchar('1');
            started_printing = 1; /* Set the flag to start printing */
        }
        else if (started_printing)
        {
            putchar('0');
        }

        mask >>= 1; /* Shift the mask to the right */
    }
}

