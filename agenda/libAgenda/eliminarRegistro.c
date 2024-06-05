// eliminarRegistro.c
void eliminarRegistro(){
    printf("\033[2J");
    // Mensaje informativo para el usuario
        printf("Vamos a eliminar un registro");
    // Solicitamos el id a eliminar
        printf("Introduce el id del registro a eliminar: \n");
        getchar();
        int id = getchar();
    // Recorremos la matriz copiando el siguiente registro, en el anterior, a partir del registro indicado
        for(int i = id;i<longitudDatos;i++){
            agenda[i] = agenda[i+1];
        }
    // Recortamos la longitud de los datos
        longitudDatos--;
    // Volvemos al menu inicial
        printf("Pulsa Enter para volver al menu principal");
        getchar();
        getchar();
        printf("\033[2J");
        menuPrincipal();
}

