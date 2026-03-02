#include <stdio.h>

#define MIN_IDADE 0
#define MAX_IDADE 130

int main(){
    int idades[5], soma = 0;
    double media;

    for(int i = 0; i < 5; i++){
        do {
            printf("Digite sua idade(%d-%d): ", MIN_IDADE, MAX_IDADE);
            scanf("%d", &idades[i]);
        } while (idades[i] < MIN_IDADE || idades[i] > MAX_IDADE);

        soma += idades[i];
    }

    media = (double) soma / 5;
    printf("Média: %.2lf\n", media);

    for(int i = 0; i < 5; i++){
        if(idades[i] > media){
            printf("Idades acima da média: %d\n", idades[i]);
        }
    }

    return 0;
}