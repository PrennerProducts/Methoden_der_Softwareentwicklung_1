#include <stdio.h>
#include <stdlib.h>

int main()
{
    char _row[5];

    _row[0] = ' ';
    _row[1] = ' ';
    _row[2] = '*';
    _row[3] = ' ';
    _row[4] = ' ';

    for (int spalt = 0; spalt < 3; spalt++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (spalt == 1)
            {
                _row[1] = '*';
                _row[3] = '*';
            }
            if (spalt == 2)
            {
                _row[0] = '*';
                _row[4] = '*';
            }
            printf("%c", _row[i]);
        }
        if (spalt != 2)
        {
            printf("\n");
        }
    }
}
