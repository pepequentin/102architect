/*
** EPITECH PROJECT, 2018
** archi
** File description:
** cool
*/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check_error(int, char **);
int rotation(float m11, float m21, float angle);
int scaling_by_factors(float m11, float m21, float m31, float m32);
int translation_along_vectors(float m11, float m21, float m31, float m32);
int reflection(float m11, float m21, float angle);

int main(int argc, char **argv)
{
    check_error(argc, argv);
    int i = 1;
    int base1 = atof(argv[1]);
    int base2 = atof(argv[2]);

    while (i != argc - 1) {
        if (argv[i][1] == 't' && i + 2 <= argc - 1 && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9' && argv[i + 2][0] >= '0' && argv[i + 2][0] <= '9') {
            translation_along_vectors(base1, base2, atof(argv[i + 1]), atof(argv[i + 2]));
            i + 2;
        }
        if (argv[i][1] == 'z' && i + 2 <= argc - 1 && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9' && argv[i + 2][0] >= '0' && argv[i + 2][0] <= '9') {
            scaling_by_factors(base1, base2, atof(argv[i + 1]), atof(argv[i + 2]));
            i + 2;
        }
        if (argv[i][1] == 'r' && i + 1 <= argc - 1 && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9') {
            rotation(base1, base2, atof(argv[i + 1]));
            i + 1;
        }
        if (argv[i][1] == 's' && i + 1 <= argc - 1 && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9') {
            reflection(base1, base2, atof(argv[i + 1]));
            i + 1;
        }
        i++;
    }
}
