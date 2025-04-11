#include <stdio.h>
#include <stdlib.h>
struct Estudiante {
     char nombre[50];
      int edad;
     float promedio;
};

struct Materia {
    char nombre[50];
    float calificacion;
    int creditos;
};

void mostrarEstudiantes(struct Estudiante nombre) {

        printf("NOMBRE: %s\n", nombre.nombre);
        printf("EDAD: %i\n", nombre.edad);
        printf("PROMEDIO: %.2f\n", nombre.promedio);
        printf("-----------------\n");
}

void modificar(struct Estudiante *e, float nuevopromedio){
    printf("\n\nMODIFICANDO PROMEDIO\n\n");
    e->promedio = nuevopromedio;
}

void mostrarMaterias(struct Materia lista[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        printf("MATERIA: %s\n", lista[i].nombre);
        printf("CALIFICACION: %.2f\n", lista[i].calificacion);
        printf("CREDITOS: %d\n", lista[i].creditos);
        printf("-----------------------------\n");
    }
}

int main()
{
    struct Estudiante ana = {"Ana Garcia", 19, 9.5};

    struct Materia segundo[3] = {
    {"progra Estr", 40.2, 8},
    {"Calculo",34.6, 10},
    {"Discretas",86.3, 3}
    };

    mostrarEstudiantes(ana);
        printf("\n\n");
    mostrarMaterias(segundo, 3);
    float promedio;
    for(int i=0; i<3; i++){
        promedio+=segundo[i].calificacion;
    }
    promedio=promedio/3;
        modificar(&ana, promedio);
    mostrarEstudiantes(ana);

    return 0;
}
