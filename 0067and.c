#include <stdio.h>

int main(int argc, char *argv[]) {
    int numero1 = 4;
    int numero2 = 3;
    int numero3 = 5;
    int numero4 = 5;
    int resultado = numero1 == numero2 && numero3 == numero4;
    printf("El resultado es: %i \n",resultado);
	return 0;
}