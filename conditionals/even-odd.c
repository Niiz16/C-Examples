#include <stdio.h>

int main(int argc, char **argv) {
    int a = atoi(argv[1]);
    
    if(a % 2) {
        printf("The number is odd \n"); 
    }
    else {
        printf("The number is even \n");
    }
    return 0;
}
