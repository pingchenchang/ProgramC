#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        printf("%s, %s\n", argv[1], argv[2]);
    }
    else
    {
        printf("Not enough arguments provided.\n");
    }
    return 0;
}

// run the program to get exe first.
// then use ./program.exe arg1 arg2 for result