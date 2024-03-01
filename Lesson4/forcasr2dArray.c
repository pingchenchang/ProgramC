#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rain[5][12] =
        {
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
            {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
            {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
            {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};

    float RainYearArr[5] = {0};

    float RainYear = 0.0;

    for (int y = 0; y < 5; y++)
    {
        RainYear = 0;
        for (int m = 0; m < 12; m++)
        {
            RainYear += rain[y][m];
        }
        RainYearArr[y] = RainYear;
    }

    printf("YEAR        RAINFALL(inches)\n");
    for (int y = 0; y < 5; y++)
    {

        printf("201%d  %15.1f\n", y, RainYearArr[y]);
    }

    float RainMonthArr[12] = {0};

    float RainMonth = 0.0;
    for (int m = 0; m < 12; m++)
    {
        RainMonth = 0;
        for (int y = 0; y < 5; y++)
        {
            RainMonth += rain[y][m];
        }
        RainMonthArr[m] = RainMonth / 5;
    }
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
    for (int m = 0; m < 12; m++)
    {

        printf("%5.1f", RainMonthArr[m]);
    }

    return 0;
}
