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
   peticion = "INSERT INTO facturas (ID,cliente,base,fecha,impuesto) "  \
         "VALUES (1, 'cliente1', 3200, '2017-12-5', 21 ); " \
         "INSERT INTO facturas (ID,cliente,base,fecha,impuesto) "  \
         "VALUES (2, 'cliente2', 4200, '2017-12-6', 21 ); "     \
         "INSERT INTO facturas (ID,cliente,base,fecha,impuesto) " \
         "VALUES (3, 'cliente3', 1200, '2017-12-7', 21 );" \
         "INSERT INTO facturas (ID,cliente,base,fecha,impuesto) " \
         "VALUES (4, 'cliente1', 2200, '2017-12-8', 21  );";

   /* Execute SQL statement */
   conexion = sqlite3_exec(baseDeDatos, peticion, exito, 0, &msgError);
   
   if( conexion != SQLITE_OK ){
   fprintf(stderr, "SQL error: %s\n", msgError);
      sqlite3_free(msgError);
   } else {
      fprintf(stdout, "Los registros han sido insertados correctamente\n");
   }
   sqlite3_close(baseDeDatos);
   return 0;
}

