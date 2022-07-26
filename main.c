#include <stdio.h>
#include "funcion1.h"
#include "funcion2.h"

int main(void)
{
    float Estatura,Peso, IMC;
    int dato,facto,n,fprimo;
    printf("Ingrese su estatura en metros: ");
    scanf("%f",&Estatura);
    printf("Ingrese su peso en kilogramos: ");
    scanf("%f",&Peso);
    IMC = Peso/(Estatura*Estatura);
    printf("Su IMC es %f\n\n",IMC);

    printf("Factorial\n");
    printf("Ingrese un numero entero: ");
    scanf("%d",&dato);
    facto = Factorial(dato);
    printf("%d! = %d\n\n",dato,facto);

    printf("Numero primo\n");
    printf("Ingrese un entero: ");
    scanf("%d",&n);
    fprimo = Primo(n);
    if(fprimo)
    {
        printf("%d es primo",n);
    }
    else
        printf("%d no es primo",n);


    return 0;
}