// agenda.c
/* Programa agenda
por Jose Vicente Carratala */
#define NOMBREPROGRAMA "Programa agenda"
#define VERSION "1.0"
#define AUTOR "Jose Vicente Carratala"
#include <stdio.h>
#include <string.h>
#include "libAgenda/datos.c"
#include "libAgenda/listadoRegistros.c"
#include "libAgenda/introducirRegistro.c"
#include "libAgenda/eliminarRegistro.c"
#include "libAgenda/buscarRegistro.c"
#include "libAgenda/actualizarRegistro.c"
#include "libAgenda/menuPrincipal.c"

int main(int argc, char *argv[]) {

    // Primer registro
    
    strcpy(agenda[1].nombre,"Jose Vicente");
    strcpy(agenda[1].telefono,"12345678");
    strcpy(agenda[1].email,"info@josevicentecarratala.com");
    
    // Segundo registro
    strcpy(agenda[2].nombre,"Juan");
    strcpy(agenda[2].telefono,"53254");
    strcpy(agenda[2].email,"juan@josevicentecarratala.com");
    // Tercer registro
    strcpy(agenda[3].nombre,"Jaime");
    strcpy(agenda[3].telefono,"64566");
    strcpy(agenda[3].email,"jaime@josevicentecarratala.com");
	
   menuPrincipal();
	
	return 0;
}

