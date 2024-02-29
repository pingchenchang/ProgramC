#include <stdio.h>

int main()
{
    int basicPay = 12;
    int overPay = 12 * 1.5;
    float workHour;
    int overHour = 0;
    float total = 0;
    float tax = 0;

    printf("please input your working hour: ");
    scanf("%f", &workHour);

    if (workHour <= 40)
    {
        total = workHour * basicPay;
    }
    else
    {
        overHour = workHour - 40;
        total = workHour * basicPay + overHour * overPay;
    }
    printf("total: %f \n", total);

    if (total <= 300)
    {
        tax = total * 0.15;
    }
    else
    {
        tax = 300 * 0.15;
        total -= 300;
        if (total <= 150)
        {
            tax += total * 0.2;
        }
        else
        {
            tax += 150 * 0.2;
            total -= 150;
            if (total > 0)
            {
                tax += total * 0.25;
            }
        }
    }
    printf("tax: %f \n", tax);
    return 0;
}