#include <stdio.h>

int main(){
    int idade, anoNasc, anoAtual = 2026;
    printf("Hello World\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    anoNasc = anoAtual - idade;
    printf("Ano da Nascimento: %d", anoNasc);
    return 0;
}