#include <stdio.h>
#include <time.h>
// SJ / 4 außer, /100 aber nicht /400
// A n ist durch 4 teilbar
// B n ist durch 100 teilbar
// C n ist durch 400 teilbar
//Bool ausdrücke:
//1.    A && !(B&&!C)
//2.    (C||!B)&&A
//1. Verständnis:
//  N/4 und Nicht((B und Nicht(C)))
//  (C oder Nicht(B)) und A
#define bool int
#define true 1
#define false 0

bool istSchaltjahr1(int n){ //A && !(B && !C)
    // % prüft die division, ob rest entsteht
    return (n % 4 == 0) &&!((n % 100 == 0)&&!(n % 400 == 0));
}

bool istSchaltjahr2 (int n){ //(C || !B) && A
    return ((n % 400 == 0)||!(n % 100 == 0))&&(n % 4 == 0);
}

int main(void){
    time_t startzeit, endzeit; 
    int SJ;          // Schaltjahr
    long long int counter1 = 0;    // Zählt Schaltjahre
    long long int counter2 = 0;

    printf("Gib ein Zahl zwischen 1-1000000000 an:\t");
    scanf("%d",&SJ);

    if(SJ >= 0 && SJ <= 1000000000 ){

       if (istSchaltjahr1(SJ)){
           printf("%d ist ein Schaltjahr\n", SJ);
       }else{
           printf("%d ist kein Schaltjahr\n", SJ);}
           
        //Variante 1
        time(&startzeit);
        for (int n = 1; n <= SJ;n++){
            if(istSchaltjahr1(n)){
                counter1++;
            }
        }
        time(&endzeit);
        double time1 = difftime(endzeit,startzeit);
        //Variante 2
        time(&startzeit);
        for (int n = 1; n <= SJ;n++){
            if(istSchaltjahr2(n)){
                counter2++;
            }
        }
        time(&endzeit);
        double time2 = difftime(endzeit,startzeit);


        printf("V1: So viele Schaltjahr:\t%d\n",counter1);
        printf("V1: Zeit:\t%.2f\n",time1);
        printf("\nV2: So viele Schaltjahr:\t%d\n",counter2);
        printf("V2: Zeit:\t%.2f",time2);

    }else{
        printf("Fehlerhafte Eingabe");
}
}


