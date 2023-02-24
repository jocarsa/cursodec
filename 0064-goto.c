#include <stdio.h>

int main(int argc, char *argv[]) {
	primero:
	    printf("Primero ejecuto esto \n");
        goto tercero;
    segundo:
        printf("Por último ejecuto esto \n");
        goto final;
    tercero:
	    printf("A continuación ejecuto esto \n");
        goto segundo;
    final:
	   return 0;
}