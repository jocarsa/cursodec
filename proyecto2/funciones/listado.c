// main.c
void listado(){
    limpiarPantalla();
    /* Create SQL statement */
   peticion = "SELECT * from facturas;";

   /* Execute SQL statement */
   conexion = sqlite3_exec(baseDeDatos, peticion, exito, 0, &msgError);
   printf("Pulsa una tecla para volver al menu inicial \n");
        getchar();
        getchar();
        menu();
}

