#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Producto{
    int id;
    char nombre[50];
    float precio;
    int stock;
};

void mostrarProducto(struct Producto p) {
     printf("Nombre: %s\nPrecio: $%.2f\n", p.nombre, p.precio);
}

void actualizarStock(struct Producto *p, int nuevoStock) {
    p->stock = nuevoStock;
}

void imprimir(){
    printf("\n\tPRODUCTOS DE LA TIENDA:");
    printf("\n\n\t-Dog chow");
    printf("\n\t-Frijoles Macho");
    printf("\n\t-Pasta La Moderna");
    printf("\n\t-Salsa Valentina");
    printf("\n\t-Leche Lala +proteina");
}

int main()
{
    struct Producto tienda[5]= {
    {2001, "Dog chow", 289.00, 30},
    {2002, "Frijoles Macho", 29.90, 5},
    {2003, "Pasta La Moderna", 10.50, 20},
    {2004, "Salsa Valentina", 35.00, 7},
    {2005, "Leche Lala +proteina",40.99, 50}
    };
    imprimir();
    printf("\n\nPREGUNTAR POR PRECIO: ");
    scanf("%s",tienda->nombre);
   // buscarproducto(inventario, 3, "Telefono");

    return 0;
}
