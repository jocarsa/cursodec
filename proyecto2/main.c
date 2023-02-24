// main.c
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include <string.h> 
#include "funciones/datosIniciales.c"
#include "funciones/limpiarPantalla.c"
#include "funciones/exito.c"
#include "funciones/conectar.c"
#include "funciones/listado.c"
#include "funciones/insertar.c"
#include "funciones/actualizar.c"
#include "funciones/borrar.c"
#include "funciones/menu.c"

int main(){
       //conexion();
        conectar();
        menu();
}

