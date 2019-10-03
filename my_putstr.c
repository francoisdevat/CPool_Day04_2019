/*
** EPITECH PROJECT, 2019
** fonction de contage 
** File description:
** je comprend rien aux strings
*/
void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != *str['\0']);
           
    {
        my_putchar(str[i]);
        ++i;
    }        
}
