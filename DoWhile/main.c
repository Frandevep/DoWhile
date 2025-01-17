#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;//creacion de variable a condicionar con el do while

    do{
        printf("Ingrese un numero:");
        scanf("%d",&num);//pedimos al usuario un numero

         if (num<10) //si el usuario es menor que 10 le pedimos que lo intente nuevamente
         {
            printf("El numero ingresado fue menor que 10. Intente nuevamente.\n");
         }

    }while(num<10);//si el numero ingresado es menor a 10, el do while se va a ejecutar hasta que el usuario ingrese un valor mayor a 10

    printf("Programa terminado");

    return 0;
}
