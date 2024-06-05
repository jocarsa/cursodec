// listadoRegistros.c
void listadoRegistros(){
    printf("\033[2J");
    // Recorremos los registros uno a uno, los mostramos por pantalla
    for(int i = 1; i<=longitudDatos;i++){
        printf("Registro: %s %s %s \n",agenda[i].nombre,agenda[i].telefono,agenda[i].email);
    }
    // Volvemos al menu principal
    printf("Pulsa Enter para volver al menú principal \n");
    getchar();
    getchar();
    printf("\033[2J");
    menuPrincipal();
}

