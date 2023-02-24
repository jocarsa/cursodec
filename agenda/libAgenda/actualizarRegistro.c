// actualizarRegistro.c
void actualizarRegistro(){
    printf("\033[2J");
    // Informamos al usuario
        printf("Vamos a actualizar un registro \n");
    // Introducimos el identificador del contacto
        printf("Introduce el id del contacto: \n");
        getchar();
        int idmodificar = getchar();
        idmodificar -= 48; // Convertimos de ASCII a numero
    // Informamos al usuario del id que se va a modificar
        printf("Has introducido el id para modificar: %d \n",idmodificar);
    // Solicitamos el nuevo nombre
        printf("Introduce el nuevo nombre del contacto: (anterior: %s) \n",agenda[idmodificar].nombre);
        char nombre[100];
        scanf("%s",nombre);
    // Solicitamos el nuevo telefono
        printf("Introduce el nuevo telefono del contacto: (anterior: %s) \n",agenda[idmodificar].telefono);
        char telefono[100];
        scanf("%s",telefono);
    // Solicitamos el nuevo email
        printf("Introduce el nuevo email del contacto: (anterior: %s) \n",agenda[idmodificar].email);
        char email[100];
        scanf("%s",email);
    // Creamos una nueva estructura
        strcpy(agenda[idmodificar].nombre,nombre);
        strcpy(agenda[idmodificar].telefono,telefono);
        strcpy(agenda[idmodificar].email,email);
    // Feedback al usuario
        printf("Registro añadido, pulsa una tecla para volver al menu inicial \n");
        getchar();
        getchar();
    // Volvemos al menu principal
        printf("\033[2J");
        menuPrincipal();
    
}

