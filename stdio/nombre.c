#include <stdio.h>

int main(int argc, char *argv[]) {
    char name[100]; 
    int a;
    int b;
    int suma;

    fprintf(stdout, "Cual es tu nombre: ");
    fscanf (stdin, "%s", name);
    fprintf(stdout, "Hola %s \n ", name); 
    fprintf(stdout, "Ingresa dos numeros: \n ");
    fscanf (stdin, "%d %d", &a, &b);

    suma = a + b;

    fprintf(stdout, "%d, %d \n", a, b);
    fprintf(stdout, "la suma de los numeros es:  %d + %d = %d. \n", a, b, suma);
    
    return 0;
}
