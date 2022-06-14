#include "shell.h"
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1
 * on error, -1 is returned and errno set appropriately
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
/**
 * print_s - prints a string
 * @s: string to be printed
 * Return: number of characters printed
 */
int print_s(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
return (i);
}
