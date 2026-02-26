#include <stdio.h>

// Leia 5 números, armazene em um array e calcule a média
/*
int main(){
    int numeros[1000], soma = 0;
    double media;

    for(int i = 0; i < 5; i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = (double) soma / 5;

    printf("Média: %.2lf", media);

    return 0;
}
*/

// Leia 10 números, faça a media e informe os valores acima da media
/*
int main(){
    int numeros[1000], soma = 0;
    double media;

    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    media = (double) soma / 10;
    printf("Média: %.2lf\n", media);

    for(int i = 0; i < 10; i++){
        if(numeros[i] > media){
            printf("Acima da média: %d", numeros[i]);
        }
    }

    return 0;
}
*/

// Leia 8 números e informe quantos são pares
/*
int main(){
    int numeros[8], pares = 0;

    for(int i = 0; i < 8; i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 8; i++){
        if(numeros[i] % 2 == 0){
            pares++;
        }
    }

    printf("Quantidade de números pares: %d", pares);

    return 0;
}
*/

// Leia 10 números e mostre a soma total

int main(){
    int numeros[10], soma = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    printf("Soma dos números: %d", soma);

    return 0;
}