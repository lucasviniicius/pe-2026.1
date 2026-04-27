#include <stdio.h>
#include <string.h>

#define TAM_NOME 30

struct Pessoa {
    char nome[TAM_NOME];
    int idade;
    double peso, altura;
};

void lerStr(char str[], int tamMAX);
void preencherPessoa(struct Pessoa *p);
void imprimirPessoa(struct Pessoa p);
void calculaIMC(struct Pessoa p);

int main(){
    struct Pessoa pessoa1;

    preencherPessoa(&pessoa1);
    imprimirPessoa(pessoa1);
    calculaIMC(pessoa1);

    return 0;
}

void preencherPessoa(struct Pessoa *p){
    printf("Digite o nome: ");
    lerStr(p -> nome, TAM_NOME);
    printf("Digite a idade: ");
    scanf("%d", &p -> idade);
    printf("Digite o peso: ");
    scanf("%lf", &p -> peso);
    printf("Digite a altura: ");
    scanf("%lf", &p -> altura);
}

void imprimirPessoa(struct Pessoa p){
    printf("----impressão----");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Peso: %lf\n", p.peso);
    printf("Altura: %lf", p.altura);
}

void calculaIMC(struct Pessoa p){
    double imc = 0;

    imc = p.peso / (p.altura * p.altura);

    printf("IMC: %lf", imc);
}

void lerStr(char str[], int tamMAX){
    fgets(str, tamMAX, stdin);

    int tam = strlen(str);

    if(tam > 0 && str[tam - 1] == '\n'){
        str[tam - 1] = '\0';
    }
}