#include <stdio.h>

#include "funciones.h"

int main(void)
{

    
    articulos_t articulos[CANT_ARTICULOS] = {0};

    printf("Bienvenido al final de Info 1 refactorizado\n\n");

    /*CARGA de las fichas*/
    cargaDeFicha(articulos);    

    /* Ordenamiento */
    ordenamientoDeFichas(articulos);
    
    /* Impresion de fichas cargadas*/
    impresionDeFichas(articulos);

    return 0;
}