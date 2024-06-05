// buscarRegistro.c
void buscarRegistro(){
    printf("\033[2J");
    // Mensaje informativo para el usuario
        printf("Vamos a buscar un registro \n");
    // Introducimos el nombre a buscar
        printf("Introduce el nombre del contacto: \n");
        char nombre[100];
        scanf("%s",nombre);
    // Recorremos la matriz registro a registro, comparando la cadena
        for(int i = 1;i<=longitudDatos;i++){
            if(strcmp(nombre,agenda[i].nombre) != 0){
                printf("Registro: %s %s %s \n",agenda[i].nombre,agenda[i].telefono,agenda[i].email);
            }
        }
    // Volvemos al menu principal
        printf("Pulsa Enter para volver al menu principal");
        getchar();
        getchar();
        printf("\033[2J");
        menuPrincipal();
}

