#include <stdio.h>

// Função sem retorno

/*
void mensagem();

int main(){
    mensagem();

    return 0;
}

void mensagem(){
    printf("Olá mundo!");
}
*/

// Digita um numero, retorna 1 se o número for positivo, retorna -1 se for negativo, retorna 0 se for zero

/*
int classificacao(int number);

int main(){
    int n, c;

    printf("Digite um número: ");
    scanf("%d", &n);

    c = classificacao(n);
    printf("Classificação: %d", c);

    return 0;
}

int classificacao(int number){
    if(number > 0) {
        return 1;
    } else if(number < 0) {
        return -1;
    } else {
        return 0;
    }
}
*/

// Digita um numero, retorna "numero positivo" for positivo, retorna "numero negativo" se for negativo, retorna "zero" se for zero

char* classificacao(int number);

int main(){
    int n;
    char* c;

    printf("Digite um número: ");
    scanf("%d", &n);

    c = classificacao(n);
    printf("Classificação: %s", c);

    return 0;
}

char* classificacao(int number){
    if(number > 0){
        return "Número positivo";
    } else if(number < 0){
        return "Número negativo";
    } else {
        return "Zero";
    }
}