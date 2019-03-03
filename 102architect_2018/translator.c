/*
** EPITECH PROJECT, 2018
** translation
** File description:
** yes
*/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int translation_along_vectors(float m11, float m21, float m31, float m32)
{
    int **translation = malloc(sizeof(int *) * (3));
    int *translated = malloc(sizeof(int ) * (3));
    int i = 0;

    while (i != 3) {
        translation[i] = malloc(sizeof(int ) * (3));
        i++;
    }
    translation[0][0] = 1;
    translation[0][1] = 0;    
    translation[0][2] = m31;
    translation[1][0] = 0;
    translation[1][1] = 1;
    translation[1][2] = m32;
    translation[2][0] = 0;
    translation[2][1] = 0;
    translation[2][2] = 1;

    float res1 = 0;
    float res2 = 0;
    float res3 = 0;printf("Translation along vector (%0.f, %0.f)\n", m31, m32);
    printf("1.00\t0.00\t%.2f\n", m31);
    printf("0.00\t1.00\t%.2f\n", m32);
    printf("0.00\t0.00\t1.00\n");

    res1 = (translation[0][0] * m11) + (translation[0][1] * m21) + (translation[0][2] * 1);
    res2 = (translation[1][0] * m11) + (translation[1][1] * m21) + (translation[1][2] * 1);
    res3 = (translation[2][0] * m11) + (translation[2][1] * m21) + (translation[2][2] * 1);

    printf("(%0.f, %.0f) => (%.2f, %.2f)\n", m11, m21, res1, res2);
}