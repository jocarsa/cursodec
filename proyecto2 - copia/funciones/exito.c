// main.c
static int exito(void *noUsado, int arg1, char **arg2, char **columnas) {
   int i;
   for(i = 0; i<arg1; i++) {
      printf("%s = %s\n", columnas[i], arg2[i] ? arg2[i] : "NULL");
   }
   printf("\n");
   return 0;
}

