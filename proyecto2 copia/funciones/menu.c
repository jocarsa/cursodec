// menu.c
void menu(){
    printf("Programa de facturación v1.0 \n");
    printf("1.-...........Listado \n");
    printf("2.-...........Insertar \n");
    printf("3.-...........Actualizar \n");
    printf("4.-...........Borrar \n");
    printf("Escoge una opción \n");
    char opcion = getchar();
    printf("La opción escogida es: %c",opcion);
    switch(opcion){
        case '1':
            listado();
            break;
        case '2':
            insertar();
            break;
        case '3':
            actualizar();
            break;
        case '4':
            borrar();
            break;
    }
}

