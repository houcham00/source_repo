/*
** EPITECH PROJECT, 2022
** TASK 04 - UNIT TESTS - PART I : my_revstr.c
** File description:
** test my_revstr.c
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, reverse_characters_of_an_array)
{
    char str[] = "Hello!";
    char * o = my_revstr(str);
    cr_assert_str_eq(o, "!olleH");
}
