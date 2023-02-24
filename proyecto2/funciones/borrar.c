// borrar.c
void borrar(){
    limpiarPantalla();
    /* Open database */
   conexion = sqlite3_open("facturacion.db", &baseDeDatos);
    
    printf("Especifica el ID a eliminar \n");
    //char opcion = getchar();
    char[] opcion = "";
    scanf("%d\n", &opcion);
    printf("La opción escogida es: %s",opcion);
    

    
   /* Create SQL statement */
   peticion = "DELETE FROM facturas WHERE ID = "+opcion;

   /* Execute SQL statement */
   conexion = sqlite3_exec(baseDeDatos, peticion, exito, 0, &msgError);
   printf("Pulsa una tecla para volver al menu inicial \n");
        getchar();
        getchar();
        menu();
}

