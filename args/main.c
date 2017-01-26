#include <stdio.h>

int main(int argc, char **argv) {
    printf("argc %d \n", argc);
    
    int i = 0;
    int sum = 0;

    for(i = 0; i < argc; i++) {
        printf("argv %d: %s \n", i, argv[i]);
    }
    
    int num = atoi(argv[1]);
    printf("argv 1 = %d \n", num);

    int num2 = atoi(argv[2]);
    printf("argv 2 = %d \n", num2);

    sum = num + num2;
    
    printf("La suma de argv[1]=%d y argv[2]=%d es: %d. \n", num, num2, sum);
    
    return 0;
}
