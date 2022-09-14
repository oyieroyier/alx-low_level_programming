#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif


/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int _putchar(char a);
int main(void)
{
char a[] = "_putchar";
int i = 0;

while(a != '\0')
{
    _putchar(a[i]);
    i++;
}
return 0;
}
