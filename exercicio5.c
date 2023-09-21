#include<stdio.h>

main(){

    int numero = 50, soma = 0;

    while(numero <= 50){
        if (numero % 2 == 0) {
            soma += numero;
        }
    numero ++;
    }
     printf("\n a soma dos primeiros 50 pares e:%d", soma);
}