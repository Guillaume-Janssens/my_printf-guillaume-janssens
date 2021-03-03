/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** prints a string of char
*/

void my_putchar(char c);
void my_putstr(char *str);

void my_putstr2(char *str)
{
    int i = 0;
    char tprnt[] = "0      abtnvfr                  ";
    int x;
    
    while (str[i] != '\0') {
        if (str[i] < ' ') {
            x = str[i];
            my_putchar('\\');
            my_putchar(tprnt[x]);
        }
        else
            my_putchar(str[i]);
        i += 1;
    }
    my_putstr("\\0");
}
