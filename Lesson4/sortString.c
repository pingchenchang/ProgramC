#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverseString(char str[]);
int countArray(char arr[][50], int size);
#define MAX_STRINGS 10 // 最大字串數量
#define STRING_SIZE 50 // 每個字串的最大長度
int main()
{
    char word[50];
    char switchWord1[50];
    char name[25][50], temp[25];
    printf("input word to switch: ");
    scanf("%s", word);

    reverseString(word);

    char strings[MAX_STRINGS][STRING_SIZE];
    printf("Enter up to %d strings. Enter an empty string to stop.\n", MAX_STRINGS);
    int count = 0;
    for (int i = 0; i < MAX_STRINGS; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(name[i], STRING_SIZE, stdin);

        if (strlen(name[i]) - 1 == 0)
        {
            break;
        }
        count++;
    }
    int n = count;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j + 1], sizeof(name[j]) - 1);
                strncpy(name[j + 1], temp, sizeof(name[j] + 1) - 1);
            }
        }
    }
    printf("The strings appear after sorting :\n");

    for (int i = 0; i <= n; i++)
        printf("%s", name[i]);

    return 0;
}

int reverseString(char str[])
{
    int l = strlen(str);
    printf("switched: ");
    for (int i = l; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

// int countStrings(char arr[][50], int size)
// {
//     char strings[MAX_STRINGS][STRING_SIZE];
//     int count = 0;

//     printf("Enter up to %d strings. Enter an empty string to stop.\n", MAX_STRINGS);

//     for (int i = 0; i < MAX_STRINGS; i++)
//     {
//         printf("Enter string %d: ", i + 1);
//         fgets(strings[i], STRING_SIZE, stdin);

//         // 移除換行字符
//         strings[i][strcspn(strings[i], "\n")] = 0;

//         // 檢查是否為空字串
//         if (strlen(strings[i]) == 0)
//         {
//             break; // 如果使用者輸入空字串，停止輸入
//         }
//         count++; // 增加非空字串的計數
//     }

//     printf("You entered %d non-empty strings.\n", count);

//     return 0;
// }