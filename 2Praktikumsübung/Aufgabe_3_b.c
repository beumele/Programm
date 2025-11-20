#include <stdio.h>
#define Bool int
#define true 1
#define false 0


int Implikation(int A, int B){ // A -> B
    return !A || B;
}

int Aequivalenz(int A,int B){
    return Implikation(A,B) && Implikation(B,A);
}

int main (void){
    
    int input1, input2;

    scanf("%d",&input1);
    scanf("%d",&input2);

    int Ergeniss3 = Aequivalenz(input1,input2);

    int implAB = Implikation(input1, input2);
    int implBA = Implikation(input2, input1);
    int aequiv = Aequivalenz(input1, input2);

    printf("A -> B: %d\n", implAB);
    printf("B -> A: %d\n", implBA);
    printf("A <-> B: %d\n", aequiv);
}

//  A   B   AB  |   B   A   BA  |   AB  BA  ABBA
//  1   1   1   |   1   1   1   |   1   1     1
//  1   0   0   |   1   0   0   |   0   1     0
//  0   1   1   |   0   1   1   |   1   0     0
//  0   0   1   |   0   0   1   |   0   0     1
