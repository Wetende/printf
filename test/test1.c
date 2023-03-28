#include "main.h"

int main(void)
{
    int len;

    len = _printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    len = _printf("Negative:[%d]\n", -762534);
    _printf("Length:[%d, %i]\n", len, len);
    len = _printf("Binary:[%b]\n", 98);
    _printf("Length:[%d, %i]\n", len, len);
    len = _printf("Unknown:[%r]\n");
    _printf("Length:[%d, %i]\n", len, len);
    return (0);
}

