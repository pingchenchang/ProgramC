#include <stdio.h>
#include <stdbool.h>

bool checkWin(char ticArray[3][3], char player)
{
    for (int i = 0; i < 3; i++)
    {
        if (ticArray[i][0] == player && ticArray[i][1] == player && ticArray[i][2] == player)
        {
            return true;
        }
    }
    for (int j = 0; j < 3; j++)
    {
        if (ticArray[0][j] == player && ticArray[1][j] == player && ticArray[2][j] == player)
        {
            return true;
        }
    }
    if (ticArray[0][0] == player && ticArray[1][1] == player && ticArray[2][2] == player)
    {
        return true;
    }
    if (ticArray[0][2] == player && ticArray[1][1] == player && ticArray[2][0] == player)
    {
        return true;
    }
    return false;
}

int main()
{
    char ticArray[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};

    int moves = 0;
    while (true)
    {
        int row, col;
        char player = moves % 2 == 0 ? 'O' : 'X';

        printf("Player %c, enter row and column (0-2): ", player);
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2 || ticArray[row][col] != ' ')
        {
            printf("Invalid move. Try again.\n");
            continue;
        }

        ticArray[row][col] = player;
        moves++;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%c ", ticArray[i][j]);
            }
            printf("\n");
        }

        if (checkWin(ticArray, player))
        {
            printf("Player %c wins!\n", player);
            break;
        }
        else if (moves == 9)
        {
            printf("It's a draw!\n");
            break;
        }
    }
    return 0;
}
