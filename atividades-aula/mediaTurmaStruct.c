#include <stdio.h>

#define TAM 5

struct Alunos{
    double nota1, nota2, media;
};

void preencherNota(struct Alunos *a, int tam);
double mediaTurma(struct Alunos *a, int tam);
void imprimir(struct Alunos *a, int tam, double media);

int main(){
    struct Alunos aluno[TAM];
    double mediaDaTurma;

    printf("---preencher---\n");
    preencherNota(aluno, TAM);
    printf("\n---média da turma---\n");
    mediaDaTurma = mediaTurma(aluno, TAM);
    printf("Média da turma: %.2lf", mediaDaTurma);
    printf("\n---impressão---\n");
    imprimir(aluno, TAM, mediaDaTurma);

    return 0;
}

void preencherNota(struct Alunos *a, int tam){
    for(int i = 0; i < tam; i++){
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%lf", &a[i].nota1);
        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%lf", &a[i].nota2);
        a[i].media = ((a[i].nota1 * 2) + (a[i].nota2 * 3)) / 5;
    }
}

double mediaTurma(struct Alunos *a, int tam){
    int mediaTurma = 0;

    for(int i = 0; i < tam; i++){
        mediaTurma += a[i].media;
    }

    return mediaTurma / tam;
}

void imprimir(struct Alunos *a, int tam, double media){
    for(int i = 0; i < tam; i++){
        if(a[i].media > media){
            printf("Nota 1 do aluno %d: %.2lf\n", i + 1, a[i].nota1);
            printf("Nota 2 do aluno %d: %.2lf\n", i + 1, a[i].nota2);
            printf("Média do aluno %d: %.2lf\n", i + 1, a[i].media);
        }
    }
}