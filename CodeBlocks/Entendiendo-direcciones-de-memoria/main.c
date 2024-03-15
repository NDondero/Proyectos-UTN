#include <stdio.h>
#include <stdlib.h>

int suma(int, int);
void suma2(int*, int*, int*);

int main()
{
    int numero1 = 10;
    int numero2 = 12;
    printf("El numero uno reside en la posicion de memoria \n%p\n\n", &numero1);
    printf("Y el numero dos reside en la posicion de memoria \n%p\n\n", &numero2);

    system("pause");
    printf("\n");

    int sum = suma(numero1, numero2);

    printf("La variable receptora de la llamada a la funcion suma reside en \n%p\ny su valor es %i\n", &sum, sum);

    printf("\n");
    system("pause");
    printf("\n");

    int sumaReferencia;
    suma2(&numero1, &numero2, &sumaReferencia);

    printf("\n");
    system("pause");
    printf("\n");
    printf("Para corroborar la direccion de sumaReferencia con la direccion dentro de la funcion\n");
    printf("sumaReferencia reside en \n%p\n\n", &sumaReferencia);

    system("pause");
    printf("\n\n");
    printf("Bonus Track:\n\n");
    printf("Las funciones tambien residen en algun lugar de la memoria, por eso en funciones como suma ustedes podrian haber puesto return suma y lo unico que reciben es una advertencia\n\n");
    printf("La funcion main reside en \n%p\n\n", main);
    printf("La funcion suma reside en \n%p\n\n", suma);
    printf("La funcion suma2 reside en \n%p\n\n", suma2);

    return 0;
}

int suma(int num1, int num2) {
    int sum = num1 + num2;
    printf("Dentro de la funcion suma, la variable sum reside en \n%p\n\n", &sum);
    printf("Y num1 y num2, que son sus parametros, residen en \n%p\ny \n%p\nrespectivamente\n", &num1, &num2);
    return sum;
}

/// 3 maneras de declarar punteros, lo explicamos en el pizarron ;)
void suma2(int* num1, int * num2, int *sum) {

    printf("Aca las cosas se pueden poner confusas... vamos a hacer un listado de direcciones\n");
    printf("%p para num1\n", &num1);
    printf("%p para *num1\n", &(*num1));
    printf("%p para num2\n", &num2);
    printf("%p para *num2\n", &(*num2));
    printf("%p para sum\n", &sum);
    printf("%p para *sum\n", &(*sum));
    *sum = *num1 + *num2;
}
