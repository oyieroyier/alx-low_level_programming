#include "main.h"

int _putchar(char c);

int main(void)
{
    char str[] = "_putchar";
    int i = 0;

    while (str[i] != '\0')
    {
        char c = str[i];
        _putchar(c);
        i++;
    }
    _putchar("\n")

return 0;
}
