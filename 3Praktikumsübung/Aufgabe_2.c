#include <stdio.h>

int fak(int x){
    int ergeniss = 1;
    while (x > 1){
        ergeniss = ergeniss * x;
        x--;
    }
    return ergeniss;
}

int main(){
    int x = 4;

    printf("\nFakultaeten %d:\n", x);
    for (int z = 1; z <= x; z++) {
        printf("%d! = %d\n", z,fak(z));
    }

}   