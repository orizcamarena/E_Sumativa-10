#include <stdio.h>

int main (){

    int a;

    printf ("\n\t    Sumativa #10    \n\n");

    printf("Indroduce un numero: ");
    scanf ("%d", &a); 

    if ( a == 15)
    {
        printf("El valor introducido es Quince. \n ");
    }
    else
    printf("\n\t  Su resultado al cubo es = %d", a*a*a);

    return 0; 
}