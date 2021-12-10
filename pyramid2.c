#include <stdio.h>
#include <stdlib.h>

void print_space(); //Funktionsdeklarationen
void print_star();


int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("ERROR 1, bitte Komandozeilenargument übergeben!"); //Komandozeileneingabecheck
    return 0;
    }
    int zahl;
    zahl = atoi(argv[1]); //char cast to int
    //printf("Die uebergebene Zahl ist: %d\n", zahl);
    if(zahl < 0){
        printf("ERROR, bitte gib eine natürliche Zahl ein.");
    return 0;
    }


    int anzahl_stellen = zahl + (zahl - 1); //Berechnung wieviel Stellen eine Zeile hat
    //printf("Anzahl der Stellen = %d\n", anzahl_stellen);
    int stern_mitte = ((anzahl_stellen + 1) / 2); // die Mittelstelle berechnen

    for (int i = 1; i <= zahl; ++i) { //for Schleife für die Zeilen
        for (int j = 1; j <= anzahl_stellen; j++) { // for Schleife für die Stellen


            if(i == 1 && j == ((anzahl_stellen + 1) / 2)) { // Erster Stern ganz oben Mitte
                print_star();
            }
            else if (i > 1) {
                if (j > (stern_mitte - i) && (j <= ((stern_mitte +i-1) ))){  // Alle anderen Sterne berechnen und Printen

                    print_star();
                }
                else {
                    print_space();  // wenn kein Stern dann Leerzeichen
                }

            }
            else{
                print_space();
            }
        }
        if(i != zahl){              // Zeilenumbruch + nach der letzen iteration kein Zeilenumbruch!
            printf("\n");
        }

    }
    return 0;
}

void print_space(){ //print Leerzeichen FKT
    printf(" ");
}

void print_star(){ // print Stern FKT
    printf("*");
}