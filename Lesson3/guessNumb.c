#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("This is a guessing game.\n");
    printf("I have chosed a nuber between 0 and 20 which you must guess.\n");

    srand(time(0));
    int answer = rand() % 21;
    int chance = 5;
    int guess;
    int rangeT = 20;
    int rangeB = 0;

    while (chance > 0)
    {
        printf("===========================\n");
        printf("You have %d tries\n", chance);
        printf("guess an number (%d ~ %d):", rangeB, rangeT);
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("lower\n");
            if (guess < rangeT)
            {
                rangeT = guess;
            }
        }
        else if (guess < answer)
        {
            printf("higher\n");
            if (guess > rangeB)
            {
                rangeB = guess;
            }
        }
        else
        {
            printf("you got it!!!");
            return 0;
        }
        chance -= 1;
    }

    printf("failed. the answer: %d", answer);
    return 0;
}
