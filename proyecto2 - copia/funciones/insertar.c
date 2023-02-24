// insertar.c
void insertar(){
    limpiarPantalla();
     peticion = "CREATE TABLE facturas("  \
         "ID INT PRIMARY KEY     NOT NULL," \
         "cliente       TEXT    NOT NULL," \
         "base            INT     NOT NULL," \
         "fecha        CHAR(50)," \
         "impuesto         INT );";

   /* Execute SQL statement */
   conexion = sqlite3_exec(baseDeDatos, peticion, exito, 0, &msgError);
   printf("Pulsa una tecla para volver al menu inicial \n");
        getchar();
        getchar();
        menu();
}

