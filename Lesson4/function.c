#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int x, int y);
float absVal(float x);
float squareRoot(float x);

int main()
{
    int result = gcd(35, 150);
    printf("The gcd of 150 and 35 is %d\n", result);
    float resultAbs = absVal(-15.5);
    printf("The absVal of -15.5 is %f\n", resultAbs);

    printf("%.2f\n", squareRoot(16.0));
}

int gcd(int x, int y)
{
    int temp = 0;
    // [48, 18] = 6*8 - 6*3*2 = 6*2
    // [18, 12] = 6*3 - 6*2 = 6
    // [12, 6 ] = 6*2 -6 = 6
    // [6 , 6 ] = 0
    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }

    return x;
}

float absVal(float x)
{
    if (x < 0)
    {
        x = -x;
    }
    return x;
}

float squareRoot(float x)
{
    if (x < 0)
    {
        return -1.0;
    }
    else
    {

        return sqrt(x);
    }
}