#include <stdio.h>

int maxArrays(float *xpointer, float *ypointer, float *zpointer);
int getal;
int ctr;

int main()
{
    float x[4];
    float y[4];
    float z[4];
    float *xptr;
    float *yptr;
    float *zptr;

    xptr = &x[0];
    yptr = &y[0];
    zptr = &z[0];

    x[0] = 1.4; x[1] = 4.8; x[2] = 0.1; x[3] = 9.2;
    y[0] = 3.5; y[1] = 9.7; y[2] = 5.7; y[3] = 3.7;
    printf("Dit zijn de Array 1 en Array 2:\n");
    for (getal = 0; getal < 4; getal++)
    {
        printf("%g %g\n", x[getal], y[getal]);
    }
    printf("\nDit is de Array 3:\n");
    maxArrays(xptr, yptr, zptr);
    for (getal = 0; getal < 4; getal++)
    {
        printf("%g\n", z[getal]);
    }
    
    return 0;
}

int maxArrays(float *xpointer, float *ypointer, float *zpointer)
{
    for (ctr = 0; ctr < 4; ctr++)
    {
        if (xpointer[ctr] > ypointer[ctr])
        {
            zpointer[ctr] = xpointer[ctr];
        }
        else
        {
            zpointer[ctr] = ypointer[ctr];
        }
    }
}