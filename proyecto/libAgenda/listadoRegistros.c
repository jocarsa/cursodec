// libAgenda/listadoRegistros.c
void listadoRegistros(){
    for(int i = 1; i<=3;i++){
        printf("Registro: %s %s %s \n",agenda[i].nombre,agenda[i].telefono,agenda[i].email);
    }
}

