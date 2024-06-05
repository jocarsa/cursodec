// menuPrincipal.c
menuPrincipal(){
	printf("\033[2J");
     // Mensaje de bienvenida
	printf("%s v%s \n",NOMBREPROGRAMA,VERSION);
	printf("%s \n",AUTOR);
	printf("\t 1 - Listado de registros \n");
	printf("\t 2 - Introducir un registro \n");
	printf("\t 3 - Eliminar un registro \n");
	printf("\t 4 - Buscar un registro \n");
	printf("\t 5 - Actualizar un registro \n");
	printf("Tu opcion: ");
	char opcion = getchar();
	printf("La opción que has seleccionado es: %c \n",opcion);
	switch(opcion){
	    case '1':
	        listadoRegistros();
	        break;
        case '2':
	        introducirRegistro();
	        break;
        case '3':
	        eliminarRegistro();
	        break;
        case '4':
	        buscarRegistro();
	        break;
	    case '5':
	        actualizarRegistro();
	        break;
        default:
            printf("La opción que has introducido no es válida");
             printf("Pulsa Enter para volver al menú principal \n");
		    getchar();
		    getchar();
		    printf("\033[2J");
		    menuPrincipal();
            
            break;
	}
}

// menuPrincipal.c
void menuPrincipal(){
	printf("\033[2J");
     // Mensaje de bienvenida
	printf("%s v%s \n",NOMBREPROGRAMA,VERSION);
	printf("%s \n",AUTOR);
	printf("\t 1 - Listado de registros \n");
	printf("\t 2 - Introducir un registro \n");
	printf("\t 3 - Eliminar un registro \n");
	printf("\t 4 - Buscar un registro \n");
	printf("\t 5 - Actualizar un registro \n");
	printf("Tu opcion: ");
	char opcion = getchar();
	printf("La opción que has seleccionado es: %c \n",opcion);
	switch(opcion){
	    case '1':
	        listadoRegistros();
	        break;
        case '2':
	        introducirRegistro();
	        break;
        case '3':
	        eliminarRegistro();
	        break;
        case '4':
	        buscarRegistro();
	        break;
	    case '5':
	        actualizarRegistro();
	        break;
        default:
            printf("La opción que has introducido no es válida");
             printf("Pulsa Enter para volver al menú principal \n");
		    getchar();
		    getchar();
		    printf("\033[2J");
		    menuPrincipal();
            
            break;
	}
}

