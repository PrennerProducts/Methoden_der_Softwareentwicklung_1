
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zahl;
    printf("Gib eine Zahl ein: ");
    scanf("%d", &zahl);
    if (zahl % 2 == 0)
    {
        printf("false");
    }
    else
    {
        printf("true");
    }
    return 0;
}
