/*escreva uma função que receba por parametro dois numeros e retorne o maior deles*/

#include <stdio.h>
#include <math.h>

int maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main(){
    int x, y;
    int resultado;

    printf("digite dois numeros: ");
    scanf("%d %d", &x, &y);

    resultado = maior(x, y);
    printf("o maior numero e: %d", resultado);

    return 0;
}