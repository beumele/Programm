#include <stdio.h>

#define USD_EUR 0.78
#define EUR_USD 1.28

int main() {
  printf("Autor: Felix\n");
  printf("Funktion: Währungsumrechner\n");
   
  int betraege[] = {1,2,5,10,20,50,100};
  int z;

  printf("\nEUR -> USD\n");
  for (z = 0; z < 7; z++) {
        printf("%.2f\t%.2f\n", (float)betraege[z], betraege[z] * EUR_USD);}

  printf("\nUSD -> EUR\n");
  for (z = 0; z < 7; z++) {
    printf("%.2f\t%.2f\n", (float)betraege[z], betraege[z] * USD_EUR);
  
}
}
