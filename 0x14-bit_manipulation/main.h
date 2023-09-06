#ifndef UNIQUE_HEADER_H
#define UNIQUE_HEADER_H

/* Declare unique function prototypes for your project here */

/* Example function prototypes: */
unsigned int my_binary_to_uint(const char *b);
void my_print_binary(unsigned long int n);
int my_get_bit(unsigned long int n, unsigned int index);
int my_set_bit(unsigned long int *n, unsigned int index);
int my_clear_bit(unsigned long int *n, unsigned int index);
unsigned int my_flip_bits(unsigned long int n, unsigned long int m);
int my_custom_function(const char *s);

#endif
