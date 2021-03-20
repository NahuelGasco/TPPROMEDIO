#include <stdio.h>
#include <stdlib.h>
///Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de Programación 1


int main()
{

    int nota, suma, promedio,i, notasTotales;
    nota=0;
    suma=0;
    promedio=0;
    notasTotales=0;

    printf("Ingrese cantidad de notas totales a promediar \n");
    scanf("%d", &notasTotales);

    for (i=0; i<notasTotales ; i++){

        printf("Ingrese nota \n");
        scanf("%d", &nota);

        suma=suma+nota;
    }
    promedio=suma/notasTotales;
    printf("La suma total de notas es: %d \n", suma);
    printf("El promedio es; %d", promedio);
    return 0;
}
