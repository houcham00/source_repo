/*
** EPITECH PROJECT, 2022
** TASK 02 - MY_STRNCPY
** File description:
** a function that copies n character
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    if (n > i)
        dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char *d = malloc(sizeof(char) * 11);
    printf("%s", my_strncpy(d, "Houcham0000000", 10));
    return 0;
}
