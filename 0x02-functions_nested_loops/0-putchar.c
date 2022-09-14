#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int _putchar(char c)
{
    char c[] = "_putchar";
    int i = 0;

    while(c != '\0')
    {
        _putchar(c[i]);
        i++;
    }
return 0;
}
