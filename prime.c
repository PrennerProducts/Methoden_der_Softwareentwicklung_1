#include <stdio.h>
#include <stdlib.h>

int check_prime(int);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("ERROR 1: Bitte Komandzeilenargument uebergeben!");
        return 0;
    }
    int my_argument = atoi(argv[1]);
    //printf("Die Uebergebene Zahl ist: %d\n", my_argument);
    if(my_argument < 1){
        printf("ERROR 2: Bitte gib eine natuerliche Zahl (>0) ein!");
        return 0;
    }


    for (int i = 2; i <= my_argument; i++) {
        int line_count;
        if (check_prime(i) == 1) {
            line_count++;
            if((line_count-1) % 10 == 0 && line_count != 1){
                printf("\t");
            }
            printf("%d ", i);
        }
    }

}
    int check_prime(int a) {
        int c;

        for (c = 2; c <= a - 1; c++) {
            if (a % c == 0)
                return 0;
        }
        return 1;
    }


