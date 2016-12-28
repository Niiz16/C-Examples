#include <stdio.h>

int main(int argc, char **argv) {
    printf("int %zu\n", sizeof(int));
    printf("float %zu\n", sizeof(float));
    printf("double %zu\n", sizeof(double));
    printf("char %zu\n", sizeof(char));
    printf("%f\n", 3.5/2);
    return 0;
}
