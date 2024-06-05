// guardarDatos.c
void guardarDatos(){
    printf("\033[2J");
    // Creamos un archivo
    FILE *archivo;
    archivo = fopen("agenda.txt","w");
    // Recorremos los registros uno a uno, los mostramos por pantalla
    for(int i = 1; i<=longitudDatos;i++){
        fprintf(archivo,"%s|%s|%s \n",agenda[i].nombre,agenda[i].telefono,agenda[i].email);
    }
    fclose(archivo);
    // Volvemos al menu principal
    printf("Pulsa Enter para volver al menú principal \n");
    getchar();
    getchar();
    printf("\033[2J");
    menuPrincipal();
}

