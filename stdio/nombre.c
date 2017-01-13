#include <stdio.h>

int main(int argc, char *argv[]) {
    char name[100]; 
    fprintf(stdout, "Cual es tu nombre: ");
    fscanf (stdin, "%s", name);
    fprintf(stdout, "Hola %s \n ", name); 


    return 0;
}
