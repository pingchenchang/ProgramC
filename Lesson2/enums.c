#include <stdio.h>

int main()
{
    enum company
    {
        Google,
        Facebook,
        Xerox,
        Yahoo,
        Ebay,
        Microsoft
    };

    enum company xerox = Xerox;
    enum company google = Google;
    enum company ebay = Ebay;

    printf("the xerox value is %d\n", xerox);
    printf("the google value is %d\n", google);
    printf("the ebay value is %d\n", ebay);

    return 0;
}