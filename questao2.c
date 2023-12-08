/*faça uma função que receba um numero inteiro entre 1 a 12 e imprima em tela o mês e a sua qunatidade de dias de acordo com o numero digitado pelo usuario .
exemplo: entrada = 4. saida = abril*/

#include <stdio.h>

void mesEDias(int numero)
{

    char *mes[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho",
                   "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    /*função quantidade de dias*/
    int quantidadeDeDias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    /*função numeros inteiros*/
    if (numero >= 1 && numero <= 12)
    { 

        printf("mes: %s\n", mes[numero - 1]);
        printf("quantidade de dias: %d\n", quantidadeDeDias[numero - 1]);
    }
    else
    {
        printf("numero invalido. deve se imprimir o mes de 1 a 12\n");
    }
}

int main()
{

    int numero;

    printf("digite um numero de 1 a 12");
    scanf("%d", &numero);

    mesEDias(numero);

    return 0;
}