#include <stdio.h>

int main(int argc, char *argv[]) {
    int numero1 = 3;
    int numero2 = 4;
    int numero3 = 5;
    int numero4 = 6;
    int numero5 = 7;
    int numero6 = 8;
    int resultado = numero1 == numero2 || numero3 == numero4 || numero5 == numero6;
    printf("El resultado es: %i \n",resultado);
	return 0;
}