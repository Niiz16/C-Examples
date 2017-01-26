#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    float a = 0;
    float b = 0; 
    a = atof(argv[1]);
    b = atof(argv[2]);

    printf("a = %s \n", argv[1]);
    printf("b = %s \n", argv[2]);
    printf("a = %f \n", a);
    printf("b = %f \n", b);
    printf( "a + b = %f \n", a + b);
    printf( "a - b = %f \n", a - b);
    printf( "a * b = %f \n", a * b);
    printf( "a / b = %f \n", a / b);
    printf( " a module b = %d \n", (int)a % (int)b);
    return 0;
}
