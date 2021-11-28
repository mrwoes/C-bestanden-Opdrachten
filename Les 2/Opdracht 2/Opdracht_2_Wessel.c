#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void berekent_de_omtrek(float *lengte);


int main()
{
    float diameter;
    float *diameter_1;
    printf("Hier komt de cirkel haar diameter: ");
    scanf("%f", &diameter);
    diameter_1 = &diameter;
    berekent_de_omtrek(diameter_1);
    printf("%f\n", diameter);
    return 0;
}


void berekent_de_omtrek(float *lengte)
{
    *lengte = *lengte * M_PI;
}