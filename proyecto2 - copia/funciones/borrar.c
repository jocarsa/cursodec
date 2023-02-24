// borrar.c
void borrar(){
    limpiarPantalla();
    /* Open database */
   conexion = sqlite3_open("facturacion.db", &baseDeDatos);
   /* Create SQL statement */
   peticion = "DELETE FROM facturas WHERE ID = 4;";

   /* Execute SQL statement */
   conexion = sqlite3_exec(baseDeDatos, peticion, exito, 0, &msgError);
   printf("Pulsa una tecla para volver al menu inicial \n");
        getchar();
        getchar();
        menu();
}

