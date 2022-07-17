#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume)
{
    *area = 4 * 3.14 * (R * R);
    *volume = (*area * R) / 3;
}

int main()
{
    float area, volume, R = 2;

    calc_esfera(R, &area, &volume);
    printf("AREA: %.2f\nVOLUME: %.2f\n", area, volume);
}