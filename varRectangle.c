#include <stdio.h>

int main()
{
    double w, h, perimeter, area;
    w = 3.3;
    h = 2.2;
    perimeter = (w + h) * 2.0;
    area = w * h;
    printf("w: %.2f, h: %.2f, perimeter: %.2f, area: %.2f", w, h, perimeter, area);
}