#include <stdio.h>


int fak(int x) {
    return (x == 0) ? 1 : x * fak(x - 1); // Bedingung ? Wert_wenn_wahr : Wert_wenn_falsch
}

int BinKo_fak(int n, int k){ //BioKo mit fak 
        if (n < k) {
        printf("Fehler: n muss >= k sein!\n");
        return 0;  
    }
    return((fak(n)) / ((fak(k))*(fak(n - k))));
}

int BioKo_Nofak(int n, int k){ // Rekurisve Funktion
    if(k == 0 || n == k){
        return 1;
    }else if (n < k){
        return 0;
    }else{
        return BioKo_Nofak(n-1,k-1)+BioKo_Nofak(n-1,k);
    }
    
}


int main(void)
{
    int x = BinKo_fak(5,3);
    int z = BioKo_Nofak(5,3);
    printf("%d\n",x);
    printf("%d",z);
}

