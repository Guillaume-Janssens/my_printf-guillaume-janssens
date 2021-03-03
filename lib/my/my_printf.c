/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** displays the given argument
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void my_putstr(char *str);
void my_putstr2(char *str);
void my_putchar(char c);
void my_put_nbr(int nb);
void my_putbinary(int nb);

void my_printer(char str, va_list list)
{
    if (str == 'c')
        my_putchar((int)(va_arg(list, int)));
    else if (str == 's')
        my_putstr((char *)(va_arg(list, char*)));
    else if (str == 'd')
        my_put_nbr((int)(va_arg(list, int)));
    else if (str == 'S')
        my_putstr2((char *)(va_arg(list, char*)));
    else if (str == 'b')
        my_putbinary((int)(va_arg(list, int)));
}

void my_printf(char *str, ...)
{
    va_list list;
    int i = 0;

    va_start(list, str);
    
    while (str[i] != '\0')
    {
        if (str[i] != '%')
            my_putchar(str[i]);
        else if (str[i] == '%' && str[i + 1] == 'c' || str[i + 1] == 's' || str[i + 1] == 'd' || str[i + 1] == 'S' || str[i + 1] == 'b') { 
            i += 1;
            my_printer(str[i], list);
        }
        else
            my_putchar('%');
        i += 1;
    }
    va_end(list);
}
