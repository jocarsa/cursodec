// recuperarDatos.c
void recuperarDatos(){
        printf("\033[2J");
    // Declaraciones iniciales
        char cadena[80];
       const char delimitador[2] = "|";
       char *partido;
       FILE *archivo;
   // Abrimos un archivo
    archivo = fopen("agenda.txt","r");
   // Leemos el archivo linea a linea
        while( fgets (cadena, 60, archivo)!=NULL ){
            // Partimos lineas a structs
                partido = strtok(cadena, delimitador);
                int contador = 0;
                longitudDatos++;
                while( partido != NULL ) {
                  if(contador == 0){strcpy(agenda[longitudDatos].nombre,partido);}
                  if(contador == 1){strcpy(agenda[longitudDatos].telefono,partido);}
                  if(contador == 2){strcpy(agenda[longitudDatos].email,partido);}
                  partido = strtok(NULL, delimitador);
                  contador++;
               }
        }
   // Feedback al usuario
        printf("Registros cargados, pulsa una tecla para volver al menu inicial \n");
        getchar();
        getchar();
    // Volvemos al menu principal
        printf("\033[2J");
        menuPrincipal();
   
}

