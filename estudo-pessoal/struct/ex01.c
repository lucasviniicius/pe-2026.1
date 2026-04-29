#include <stdio.h>
#include <string.h>

#define TAM_STRING 50
#define QTD_ALUNOS 3

struct Aluno {
    char nome[TAM_STRING];
    float nota1, nota2;
    float media;
    char situação[TAM_STRING];
};

void lerStr(char str[], int tamMax);
void preencherAluno(struct Aluno *a, int tam);
void situacaoAluno(struct Aluno a[], int tam);

int main(){
    struct Aluno alunos[QTD_ALUNOS];

    preencherAluno(alunos, QTD_ALUNOS);
    situacaoAluno(alunos, QTD_ALUNOS);


    return 0;
}

void preencherAluno(struct Aluno *a, int tam){
    for(int i = 0; i < tam; i++){
        printf("Aluno %d - Digite seu nome: ", i + 1);
        lerStr(a[i].nome, TAM_STRING);
        printf("Aluno %d - Digite sua primeira nota: ", i + 1);
        scanf("%f", &a[i].nota1);
        getchar();
        printf("Aluno %d - Digite sua segunda nota: ", i + 1);
        scanf("%f", &a[i].nota2);
        getchar();

        a[i].media = (a[i].nota1 + a[i].nota2) / 2;
        printf("Aluno %d - Média: %f\n", i + 1, a[i].media);
    }
}

void situacaoAluno(struct Aluno a[], int tam){
    for(int i = 0; i < tam; i++){
        if(a[i].media >= 7){
            printf("Aluno %s - Aprovado por média!\n", a[i].nome);
        } else if(a[i].media > 5 && a[i].media < 6.9){
            printf("Aluno %s - Final\n", a[i].nome);
        } else if(a[i].media <= 5){
            printf("Aluno %s - Reprovado\n", a[i].nome);
        }
    }
}

void lerStr(char str[], int tamMax){
    fgets(str, tamMax, stdin);

    int tam = strlen(str);

    if(tam > 0 && str[tam - 1] == '\n'){
        str[tam - 1] = '\0';
    }
}