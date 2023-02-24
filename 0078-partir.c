// main.c
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    char cadena[80] = "primero|segundo|tercero";
   const char delimitador[2] = "|";
   char *partido;
   
   partido = strtok(cadena, delimitador);
   
   while( partido != NULL ) {
      printf( " %s\n", partido );
    
      partido = strtok(NULL, delimitador);
   }
   
   return(0);
}

