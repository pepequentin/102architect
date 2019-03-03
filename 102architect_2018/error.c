/*
** EPITECH PROJECT, 2018
** error
** File description:
** roo
*/

#include <stdlib.h>

int letters(char *str)
{
    int error = 0;
    int i = 0;

    for (i = 0; str[i] != '\0'; i++)
        if (!str[i] >= 'a' && str[i] <= 'z' &&
             str[i] >= 'A' && str[i] <= 'Z' && str[i] != '-'
           && str[i] != ' ')
            return (0);
    error++;
    return (1);
}

int digits(char *str)
{
    int error = 0;

    for (int i = 0; str[i]; i++)
	    if ((str[i] >= '0' && str[i] <= '9' && str[i] != '-'
            && str[i] != '.' && str[i] != ' '))
            return(0);
    error++;
    return (1);
}

char tamer(char *str)
{
    int error = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '-' || str[i] == ' ')
            continue;
	    else if (str[i] == 't' || str[i] == 'h' || str[i] == 'r'
            || str[i] == 's')
            return (str[i]);
        else
            return (0);
    }
    error++;
    return ('\0');
}

int check_error(int argc, char **argv)
{
    char swap;
    int i;

    if (argc < 5)
        exit(84);
    else if (digits(argv[1]) == 0 || digits(argv[2]) == 0)
        exit(0);
    for (i = 3; i < argc; i++) {
        if (letters(argv[i]) == 0)
            exit(84);
        swap = tamer(argv[i]);
        if ((swap == 'r' || swap == 's')
            && argc >= (i + 2) && digits(argv[i + 1]) == 1)
                i++;
        else if ((swap == 't' || swap == 'h')
                 && argc >= (i + 3) && digits(argv[i + 1]) == 1 &&
                 digits(argv[i + 2]) == 1)
                i += 2;
        else
            exit(84);
    }
}