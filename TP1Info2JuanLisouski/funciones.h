#define CANT_ARTICULOS 60

#define SUCURSAL_1 0
#define SUCURSAL_2 1
#define SUCURSAL_3 2
#define TOTAL 4

typedef struct {
    char descripcion[90];
    int cantidad_sucursal[3]; // sucursal 1 2 3    
    int total;
}articulos_t;

void cargaDeFicha(articulos_t *articulos);
void impresionDeFichas(articulos_t *articulos);
void ordenamientoDeFichas(articulos_t *articulos);