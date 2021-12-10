#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2){
        printf("ERROR! Argument_Error\n");
        return 0;
    }
    int zahl = atoi(argv[1]);

    if(zahl < 0){
        printf("ERROR! Gibt eine positive Ganzzahl als Parameter ein!\n");
    }

     if(zahl == 1){
            printf("0");
        }
    else if (zahl == 2){
            printf("1");
    }

    else if (zahl % 2 == 0)
    {
        int counter = 0;
        int new_zahl = zahl;
       
        while (new_zahl > 0)
        {
            if (new_zahl / 2 == 0){
                printf("%d", counter);
                break;
            }
            else{
                new_zahl = new_zahl / 2;
                counter ++;
            }
            
        }
    }
   return 0;
}
