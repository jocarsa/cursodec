// main.c
#include <stdio.h>
#include <stdlib.h>
#include "../sqlite3.h"

    sqlite3 *baseDeDatos;
   char *msgError = 0;
   int conexion;
   char *peticion;
   
void conectar(){
      /* Open database */
       conexion = sqlite3_open("facturacion.db", &baseDeDatos);
        /* Create SQL statement */
         /* Create SQL statement */
   peticion = "CREATE TABLE IF NOT EXISTS facturas("  \
         "ID INT PRIMARY KEY     NOT NULL," \
         "cliente       TEXT    NOT NULL," \
         "base            INT     NOT NULL," \
         "fecha        CHAR(50)," \
         "impuesto         INT );";

   /* Execute SQL statement */
   conexion = sqlite3_exec(baseDeDatos, peticion, exito, 0, &msgError);
   /* Execute SQL statement */
   conexion = sqlite3_exec(baseDeDatos, peticion, exito, 0, &msgError);
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
}

