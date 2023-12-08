/*Escreva uma função para o cálculo do volume de uma esfera
em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.*/

#include <stdio.h>
#include <math.h>

void conv(){

    float raio ,pi =3.1414592;

    printf("digite o raio ");
    scanf("%f",&raio);
    
    float v = (4*pi * pow(raio,3))/3;
    printf("volume da esfera :%.1f",v);
}

int main (){
    
    conv();

  return 0;

}