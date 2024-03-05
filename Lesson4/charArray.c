#include <stdio.h>
#include <stdbool.h>

int countString(const char x[]);
void concatString(char result[], char str1[], char str2[]);
bool sameString(char str1[], char str2[]);

int main()
{
    int choose = 0;
    printf("choose which function (1, 2, 3): ");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:
    {
        char word1[50];
        printf("input a word: ");
        scanf("%s", word1);
        printf("%d\n", countString(word1));
        break;
    }

    case 2:
    {
        char result[50];
        char conWord1[50];
        char conWord2[50];
        printf("input first word: ");
        scanf("%s", conWord1);
        printf("second word: ");
        scanf("%s", conWord2);
        concatString(result, conWord1, conWord2);
        printf("%s\n", result);
    }
    case 3:
    {
        char sameWord1[50];
        char sameWord2[50];
        printf("input first word: ");
        scanf("%s", sameWord1);
        printf("second word: ");
        scanf("%s", sameWord2);
        printf("%d", sameString(sameWord1, sameWord2));
    }

    default:
        break;
    }
}

int countString(const char x[])
{
    int count = 0;

    while (x[count] != '\0')
    {
        count++;
    }

    return count;
}

void concatString(char result[], char str1[], char str2[])
{
    int i = 0;
    int j = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        result[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++)
    {
        result[i + j] = str2[j];
    }
    result[i + j] = '\0';
}

bool sameString(char str1[], char str2[])
{
    int i = 0;
    bool isEquals = false;
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
    {
        i++;
    }

    if (str1[i] == str2[i])
        isEquals = true;
    else
        isEquals = false;

    return isEquals;
}
