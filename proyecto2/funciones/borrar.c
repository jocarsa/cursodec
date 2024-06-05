// borrar.c
void borrar(){
    limpiarPantalla();
    /* Open database */
   conexion = sqlite3_open("facturacion.db", &baseDeDatos);
   /* Create SQL statement */
   peticion = "DELETE FROM facturas WHERE ID = 4;";
    printf("Escoge el ID a eliminar \n");
    char opcion = getchar();
    printf("El ID escogido es: %c",opcion);
    
   /* Execute SQL statement */
   conexion = sqlite3_exec(baseDeDatos, peticion, exito, 0, &msgError);
   printf("Pulsa una tecla para volver al menu inicial \n");
        getchar();
        getchar();
        menu();
}

