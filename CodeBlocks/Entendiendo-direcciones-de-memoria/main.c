#include <stdio.h>
#include <stdlib.h>

int suma(int, int);
void suma2(int*, int*, int*);

int main()
{
    int numero1 = 10;
    int numero2 = 12;
    printf("El numero uno reside en la posicion de memoria %p\n", &numero1);
    printf("Y el numero dos reside en la posicion de memoria %p\n", &numero2);

    system("pause");

    int sum = suma(numero1, numero2);

    printf("La variable receptora de la llamada a la funcion suma reside en %p\n y su valor es %i", &sum, sum);

    system("pause");

    int sumaReferencia;
    suma2(&numero1, &numero2, &sumaReferencia);

    system("pause");
    printf("Para corroborar la direccion de sumaReferencia con la direccion dentro de la funcion\n");
    printf("sumaReferencia reside en %p\n", &sumaReferencia);

    system("pause");
    printf("\n\nBonus Track:\n\n");
    printf("Las funciones tambien residen en algun lugar de la memoria, por eso en funciones como suma ustedes podrian haber puesto return suma y lo unico que reciben es una advertencia\n\n");
    printf("La funcion main reside en %p\n", main);
    printf("La funcion suma reside en %p\n", suma);
    printf("La funcion suma2 reside en %p\n", suma2);

    return 0;
}

int suma(int num1, int num2) {
    int sum = num1 + num2;
    printf("Dentro de la funcion suma, la variable sum reside en %p\n", &sum);
    printf("Y num1 y num2, que son sus parametros, residen en %p y %p respectivamente\n", &num1, &num2);
    return sum;
}

/// 3 maneras de declarar punteros, lo explicamos en el pizarron ;)
void suma2(int* num1, int * num2, int *sum) {

    printf("Aca las cosas se pueden poner confusas... vamos a hacer un listado\n");
    printf("num1: %p\n", &num1);
    printf("*num1: %p\n", &(*num1));
    printf("num2: %p\n", &num2);
    printf("*num2: %p\n", &(*num2));
    printf("sum: %p\n", &sum);
    printf("*sum: %p\n", &(*sum));
    *sum = *num1 + *num2;
}
