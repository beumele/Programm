#include <stdio.h>

int main() {	
    printf("Größen der elementaren Datentypen :\n\n");

    printf("char:                %zu\n", sizeof(char));
    printf("signed char:         %zu\n", sizeof(signed char));
    printf("unsigned char:       %zu\n\n", sizeof(unsigned char));

    printf("short:               %zu\n", sizeof(short));
    printf("signed short:        %zu\n", sizeof(signed short));
    printf("unsigned short:      %zu\n\n", sizeof(unsigned short));

    printf("int:                 %zu\n", sizeof(int));
    printf("signed int:          %zu\n", sizeof(signed int));
    printf("unsigned int:        %zu\n\n", sizeof(unsigned int));

    printf("long:                %zu\n", sizeof(long));
    printf("signed long:         %zu\n", sizeof(signed long));
    printf("unsigned long:       %zu\n\n", sizeof(unsigned long));

    printf("long long:           %zu\n", sizeof(long long));
    printf("signed long long:    %zu\n", sizeof(signed long long));
    printf("unsigned long long:  %zu\n\n", sizeof(unsigned long long));

    printf("float:               %zu\n", sizeof(float));
    printf("double:              %zu\n", sizeof(double));
    printf("long double:         %zu\n", sizeof(long double));

    return 0;
}
