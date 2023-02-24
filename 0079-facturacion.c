#include <stdio.h>
#include <sqlite3.h> 

int main(int argc, char* argv[]) {
   sqlite3 *baseDeDatos;
   sqlite3_open("facturacion.db", &baseDeDatos);
   sqlite3_close(baseDeDatos);
}

