/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** prints a string of char
*/

void my_putchar(char c);

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
}
