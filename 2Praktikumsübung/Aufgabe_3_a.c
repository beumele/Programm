#include <stdio.h>
#define Bool int
#define true 1
#define false 0


int Implikation(int A, int B){
    return !A || B;
}

int main (void){
    
    int input1 = 0;
    int input2 = 0;

    scanf("%d",&input1);
    scanf("%d",&input2);

    int Ergeniss = Implikation(input1,input2);

    printf("Ergeniss der Imlikation:\t%d\n",Ergeniss);
}

//  A   B   AB
//  1   1   1
//  1   0   0
//  0   1   1
//  0   0   1
