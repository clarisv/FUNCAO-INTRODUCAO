/*Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e
retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da
seguinte fórmula: V = π * raio^2 * altura
em que π = 3.1414592*/

#include <stdio.h>
#include <math.h>

double cilindro_V(int a, int r)

{

    double V;
    double pi = 3.1414592;
    V = pi * r * r * a;
    return V;
}

int main()
{
    int a;
    int r;

    printf("digite a altura de um cilindro circular\n");
    scanf("%d", &a);
    printf("digite o raio de um cilindro circular\n");
    scanf("%d", &r);

    double V = cilindro_V(a, r);
    
    printf("o volume de um cilindro circular é: %2.lf\n", V);
    return 0;
}