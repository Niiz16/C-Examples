#include <stdio.h>

int main(int argc, char **argv) {
    int a = atoi(argv[1]);
    
    if (a <= 9 && !(a % 2)) {
        printf("the number is lower than 9 and the number is even \n");
    }
    else if (a > 9) {
        printf("the number is out of range \n");
    }
    else if (a % 2) {
        printf("the number is odd \n");
    }

    return 0;
}
