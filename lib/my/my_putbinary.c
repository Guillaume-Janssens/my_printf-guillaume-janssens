/*
** EPITECH PROJECT, 2020
** my_putbinary
** File description:
** transforms a number into binary form and prints it 
*/

#include <stdlib.h>
#include <stdio.h>

void my_printf(char *str, ...);

void my_putbinary(int nb)
{
    int a[1000], i;
    for(i = 0; nb > 0; i++)
    {
        a[i] = nb % 2;
        nb = nb / 2;
    }        
    for(i=i-1;i>=0;i--)
        my_printf("%d",a[i]);
}
