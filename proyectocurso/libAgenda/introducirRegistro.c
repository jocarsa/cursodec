// introducirRegistro.c
void introducirRegistro(){
    printf("\033[2J");
    // Información al usuario
        printf("Vamos a introducir un registro \n");
    // Solicitamos el nombre
        printf("Indica el nombre del contacto: \n");
        char nombre[100];
        scanf("%s",nombre);
    // Solicitamos el telefono
        printf("Indica el telefono del contacto: \n");
        char telefono[100];
        scanf("%s",telefono);
    // Solicitamos el email
        printf("Indica el email del contacto: \n");
        char email[100];
        scanf("%s",email);
    // Aumentamos el indice de la matriz
        longitudDatos++;
    // Creamos una nueva estructura
        strcpy(agenda[longitudDatos].nombre,nombre);
        strcpy(agenda[longitudDatos].telefono,telefono);
        strcpy(agenda[longitudDatos].email,email);
    // Feedback al usuario
        printf("Registro añadido, pulsa una tecla para volver al menu inicial \n");
        getchar();
        getchar();
    // Volvemos al menu principal
        printf("\033[2J");
        menuPrincipal();
    
}

