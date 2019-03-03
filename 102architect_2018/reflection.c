/*
** EPITECH PROJECT, 2018
** reflection
** File description:
** yes
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reflection(float m11, float m21, float angle)
{
    float pi = M_PI;
    float **reflection = malloc(sizeof(float *) * (3));
    float *reflected = malloc(sizeof(float ) * (3));
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Reflection over an axis with an inclination angle of %.0f degree angle\n", angle);
    while (i != 3) {
        reflection[i] = malloc(sizeof(float ) * (3));
        i++;
    }
    angle = angle * pi / 180;

    reflection[0][0] = cos(2 * angle);
    reflection[0][1] = ((sin(2 *angle)) * -1);
    reflection[0][2] = 0;
    reflection[1][0] = sin(2 * angle);
    reflection[1][1] = (cos(2 * angle)) * -1;
    reflection[1][2] = 0;
    reflection[2][0] = 0;
    reflection[2][1] = 0;
    reflection[2][2] = 1;

    while (j != 3) {
        while (k != 3) {
            if (reflection[j][k] > -0.0000001 && reflection[j][k] < 0.0000001)
                reflection[j][k] = 0.0000000;
            k++;
        }
        j++;
        k = 0;
    }
    float res1 = 0;
    float res2 = 0;
    float res3 = 0;

    res1 = (reflection[0][0] * m11) + (reflection[0][1] * m21) + (reflection[0][2] * 1);
    res2 = (reflection[1][0] * m11) + (reflection[1][1] * m21) + (reflection[1][2] * 1);
    res3 = (reflection[2][0] * m11) + (reflection[2][1] * m21) + (reflection[2][2] * 1);

    printf("%.2f\t%.2f\t0.00\n", reflection[0][0], reflection[0][1]);
    printf("%.2f\t%.2f\t0.00\n", reflection[1][0], reflection[1][1]);
    printf("0.00\t0.00\t1.00\n");
    printf("(%0.f, %.0f) => (%.2f, %.2f)\n", m11, m21, res1, res2);
}
