/*
** EPITECH PROJECT, 2018
** scaling
** File description:
** yes
*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <math.h>

int scaling_by_factors(float m11, float m21, float m31, float m32)
{
    int **scaler = malloc(sizeof(int *) * (3));
    int *scaled = malloc(sizeof(int ) * (3));
    int i = 0;

    while (i != 3) {
        scaler[i] = malloc(sizeof(int ) * (3));
        i++;
    }
    scaler[0][0] = m31;
    scaler[0][1] = 0;
    scaler[0][2] = 0;
    scaler[1][0] = 0;
    scaler[1][1] = m32;
    scaler[1][2] = 0;
    scaler[2][0] = 0;
    scaler[2][1] = 0;
    scaler[2][2] = 1;

    float res1 = 0;
    float res2 = 0;
    printf("Scaling by factors %0.f and %0.f\n", m31, m32);
    printf("1.00\t0.00\t%.2f\n", m31);
    printf("0.00\t1.00\t%.2f\n", m32);
    printf("0.00\t0.00\t1.00\n");

    res1 = (scaler[0][0] * m11) + (scaler[0][1] * m21) + (scaler[0][2] * 1);
    res2 = (scaler[1][0] * m11) + (scaler[1][1] * m21) + (scaler[1][2] * 1);
    printf("(%0.f, %.0f) => (%.2f, %.2f)\n", m11, m21, res1, res2);
}