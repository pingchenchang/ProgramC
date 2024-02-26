#include <stdio.h>
#include <math.h>

int main()
{

    int years = 0;
    int days = 0;
    int hours = 0;
    int mins = 0;

    int inputMin = 0;

    printf("Please enter minutes : ");
    scanf("%d", &inputMin);

    if (inputMin < 60)
    {
        printf("Less than a hour. Minutes: %d", inputMin);
    }
    else
    {
        hours = inputMin / 60;
        mins = inputMin % 60;

        if (hours < 24)
        {
            printf("Less than a day. Hours: %d, Minutes: %d", hours, mins);
        }
        else
        {
            days = hours / 24;
            hours = hours % 24;
            if (days < 356)
            {
                printf("Less than a year. Days: %d, Hours: %d, Minutes: %d", days, hours, mins);
            }
            else
            {
                years = days / 365;
                days = days % 365;
                {
                    printf("Years: %d, Days: %d, Hours: %d, Minutes: %d", years, days, hours, mins);
                }
            }
        }
    }
    return 0;
}