#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operations.h"

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Error 1: Bitte gibt eine Rechnung ein! z.B.: 4 + 5\n");
        return 0;
    }
    int zahl1 = atoi(argv[1]);
    int zahl2 = atoi(argv[argc -1]);



    if(strcmp(argv[2],"+") == 0){
        int result = addition(zahl1,zahl2);
                printf("%d", result);
    }

    else if(strcmp(argv[2],"-") == 0){
        int result = subtraktion(zahl1,zahl2);
        printf("%d", result);
    }

    else if(strcmp(argv[2],"/") == 0){
        int result = division(zahl1,zahl2);
        printf("%d", result);
    }

    else{
        int result = multiplikation(zahl1,zahl2);
        printf("%d", result);
    }





    return 0;

}
