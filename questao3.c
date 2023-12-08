/*Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a 
retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), 
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius*/

#include <stdio.h>

float conv(float celsius){
    return (celsius - 32.0) * (5.0/9.0);
}

int main (){
    float fahr , celsius;

    printf("digite em Fahrenheit:");
    scanf("%f",&fahr);

    celsius = conv(fahr);

    printf("%.2f",celsius);

  return 0;

}