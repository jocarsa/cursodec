#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 

static int exito(void *noUsado, int arg1, char **arg2, char **columnas) {
   int i;
   for(i = 0; i<arg1; i++) {
      printf("%s = %s\n", columnas[i], arg2[i] ? arg2[i] : "NULL");
   }
   printf("\n");
   return 0;
}

int main(int argc, char* argv[]) {
   sqlite3 *baseDeDatos;
   char *msgError = 0;
   int conexion;
   char *peticion;

   /* Open database */
   conexion = sqlite3_open("facturacion.db", &baseDeDatos);
   /* Create SQL statement */
   peticion = "CREATE TABLE facturas("  \
         "ID INT PRIMARY KEY     NOT NULL," \
         "cliente       TEXT    NOT NULL," \
         "base            INT     NOT NULL," \
         "fecha        CHAR(50)," \
         "impuesto         INT );";

   /* Execute SQL statement */
   conexion = sqlite3_exec(baseDeDatos, peticion, exito, 0, &msgError);
   
   if( conexion != SQLITE_OK ){
   fprintf(stderr, "SQL error: %s\n", msgError);
      sqlite3_free(msgError);
   } else {
      fprintf(stdout, "La tabla ha sido creada correctamente\n");
   }
   sqlite3_close(baseDeDatos);
   return 0;
}

