/*
 * File: 100-print_comb3.c
 * Auth: Ehab H.A Bellkasy
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
int digit1, digit2, index;
index = 1;

for (digit1 = 0; digit1 < 10; digit1++)
{
for (digit2 = index ; digit2 < 10; digit2++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');

if (digit1 == 8 && digit2 == 9)
continue;

putchar(',');
putchar(' ');
}
index++;
}

putchar('\n');

return (0);
}
