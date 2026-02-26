#include <stdio.h>

int main(){
    int idade, qtdPessoa = 0, soma = 0;
    double media;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    while(idade >= 0){
        qtdPessoa += 1;
        soma += idade;
        printf("Digite sua idade: ");
        scanf("%d", &idade);
    }

    if(qtdPessoa != 0){
        media = (double) soma / qtdPessoa;
        printf("Média: %.2lf", media);
    } else {
        printf("Idade inválida!");
    }

    return 0;
}