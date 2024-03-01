#include <stdio.h>
#include <stdbool.h>

int main()
{
    int primeArray[50] = {0};
    primeArray[0] = 2;
    primeArray[1] = 3;
    int num = 0;
    int p = 0;
    bool primeTrue;
    int place = 2;

    // check number
    for (int i = 4; i <= 100; i++)
    {
        primeTrue = true;
        // checked number
        for (p = 0; p <= 50; p++)
        {

            if (primeArray[p] == 0)
            {
                printf(" \n");

                break;
            }
            else
            {
                num = i % primeArray[p];
                if (num == 0)
                {
                    primeTrue = false;
                    break;
                }
            }
        }
        if (primeTrue == true)
        {
            primeArray[place] = i;
            place++;
        }
    }
    for (int i = 0; i <= 50; i++)
    {
        if (primeArray[i] == 0)
        {
            printf(" \n");

            break;
        }
        else
        {
            printf("%d, ", primeArray[i]);
        }
    }

    return 0;
}