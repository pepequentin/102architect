/*
** EPITECH PROJECT, 2018
** rotator
** File description:
** yes
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int rotation(float m11, float m21, float angle)
{
    float pi = M_PI;
    float **rotator = malloc(sizeof(float *) * (3));
    float *rotated = malloc(sizeof(float ) * (3));
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Rotation by a %.0f degree angle\n", angle);
    while (i != 3) {
        rotator[i] = malloc(sizeof(float ) * (3));
        i++;
    }
    angle = angle * pi / 180;

    rotator[0][0] = cos(angle);
    rotator[0][1] = (sin(angle)) * -1;
    rotator[0][2] = 0;
    rotator[1][0] = sin(angle);
    rotator[1][1] = (cos(angle)) * -1;
    rotator[1][2] = 0;
    rotator[2][0] = 0;
    rotator[2][1] = 0;
    rotator[2][2] = 1;

    while (j != 3) {
        while (k != 3) {
            if (rotator[j][k] > -0.0000001 && rotator[j][k] < 0.0000001)
                rotator[j][k] = 0.0000000;
            k++;
        }
        j++;
        k = 0;
    }
    float res1 = 0;
    float res2 = 0;
    float res3 = 0;

    res1 = (rotator[0][0] * m11) + (rotator[0][1] * m21) + (rotator[0][2] * 1);
    res2 = (rotator[1][0] * m11) + (rotator[1][1] * m21) + (rotator[1][2] * 1);
    res3 = (rotator[2][0] * m11) + (rotator[2][1] * m21) + (rotator[2][2] * 1);

    printf("%.2f\t%.2f\t0.00\n", rotator[0][0], rotator[0][1]);
    printf("%.2f\t%.2f\t%.2f\n", rotator[1][0], rotator[1][1]);
    printf("0.00\t0.00\t1.00\n");
    printf("(%0.f, %.0f) => (%.2f, %.2f)\n", m11, m21, res1, res2);
}
