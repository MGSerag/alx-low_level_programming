#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times,
 * in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
int count;
char letter;
for (count = 0; count < 10; count++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
