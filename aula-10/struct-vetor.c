#include <stdio.h>
#include <string.h>

#define TAM_NOME 30
#define QTD_PESSOAS 2

struct Pessoa {
    char nome[TAM_NOME];
    int idade;
    double peso, altura;
};

void lerStr(char str[], int tamMAX);
void preencherPessoas(struct Pessoa *p, int tam);
void imprimirPessoas(struct Pessoa p[], int tam);
double calcularMediaAltura(struct Pessoa p[], int tam);
int buscaSequencialPorNome(struct Pessoa p[], int tam, char x[]);
void buscarNomes(struct Pessoa p[], int tam);

int main(){
    struct Pessoa pessoas[QTD_PESSOAS];

    preencherPessoas(pessoas, QTD_PESSOAS);
    imprimirPessoas(pessoas, QTD_PESSOAS);
    double mediAltura = calcularMediaAltura(pessoas, QTD_PESSOAS);
    printf("\n-----média de alturas-----\n");
    printf("%.2lf", mediAltura);
    printf("\n-----buscar nomes-----\n");
    buscarNomes(pessoas, QTD_PESSOAS);

    return 0;
}

void lerStr(char str[], int tamMAX){
    fgets(str, tamMAX, stdin);

    int tam = strlen(str);

    if(tam > 0 && str[tam - 1] == '\n'){
        str[tam - 1] = '\0';
    }
}

void preencherPessoas(struct Pessoa *p, int tam){
    for(int i = 0; i < tam; i++){
        printf("-----digitação pessoa %d-----\n", i + 1);
        printf("Digite seu nome: ");
        lerStr(p[i].nome, TAM_NOME);
        printf("Digite sua idade: ");
        scanf("%d", &p[i].idade);
        printf("Digite seu peso: ");
        scanf("%lf", &p[i].peso);
        printf("Digite sua altura: ");
        scanf("%lf", &p[i].altura);
        getchar();
    }
}

void imprimirPessoas(struct Pessoa p[], int tam){
    for(int i = 0; i < tam; i++){
        printf("\n-----impressão pessoa %d-----\n", i + 1);
        printf("Nome: %s\n", p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("Peso: %.2lf\n", p[i].peso);
        printf("Altura: %.2lf\n", p[i].altura);
    }
}

double calcularMediaAltura(struct Pessoa p[], int tam){
    double soma = 0;

    for(int i = 0; i < tam; i++){
        soma += p[i].altura;
    }

    return soma / tam;
}

int buscaSequencialPorNome(struct Pessoa p[], int tam, char x[]){
    for(int i = 0; i < tam; i++){
        if(strcmp(p[i].nome, x) == 0){
            return i;
        }
    }

    return -1;
}

void buscarNomes(struct Pessoa p[], int tam){
    char nome[TAM_NOME];
    char opcao;
    int pos;

    do{
        printf("Digite o nome que deseja buscar: ");
        lerStr(nome, TAM_NOME);
        pos = buscaSequencialPorNome(p, tam, nome);
        
        if(pos != -1){
            printf("A pessoa %d foi buscada!", pos + 1);
        } else {
            printf("Pessoa não encontrada!");
        }

        printf("Você deseja buscar mais alguém(s/n)?");
        scanf("%c", &opcao);
        getchar();
    } while(opcao == 's');
}

void blubbleSortNomes(struct Pessoa p[], int tam){
    int i, fim, pos, troca;
    struct Pessoa aux;

    troca = 1;
    fim = tam - 2;
    pos = 0;

    while(troca == 1){
        troca = 0;

        for(int i = 0; i <= fim; i++){
            if(strcmp(p[i].nome, p[i + 1].nome) > 0){
                aux = p[i];
                p[i] = p[i + 1];
                p[i + 1] = aux;

                troca = 1;
                pos = i;
            }
        }

        fim = pos - 1;
    }
}