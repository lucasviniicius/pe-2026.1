#include <stdio.h>

int main(){
    int idade, qtdPessoa = 0, soma = 0, idades[1000];
    double media;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    while(idade >= 0){
        idades[qtdPessoa] = idade;
        qtdPessoa++;
        soma += idade;
        printf("Digite sua idade: ");
        scanf("%d", &idade);
    }

    if(qtdPessoa != 0){
        media = (double) soma / qtdPessoa;
        printf("Média: %.2lf\n", media);

        printf("Idades acima da média:\n");
        for(int i = 0; i < qtdPessoa; i++){
            if(idades[i] > media){
                printf("%d\n", idades[i]);
            }
        }
    } else {
        printf("Idade inválida!");
    }

    return 0;
}