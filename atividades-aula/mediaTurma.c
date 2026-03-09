#include <stdio.h>

#define MAX_QTD 30
#define NOTA_MAX 10
#define NOTA_MIN 0

void mediaAluno(double v[], double nota1[], double nota2[], int n);
double mediaTurma(double v[], int n);
void acimaMedia(double v[], double nota1[], double nota2[], double mediaDaTurma, int n);

int main(){
    double nota1[MAX_QTD], nota2[MAX_QTD];
    double media[MAX_QTD], mediaDaTurma;
    int tam = 30;

    for(int i = 0; i < MAX_QTD; i++){
        printf("Digite a primeira nota do usuário %d (%d-%d): ", i + 1, NOTA_MIN, NOTA_MAX);
        scanf("%lf", &nota1[i]);
    }

    for(int i = 0; i < MAX_QTD; i++){
        printf("Digite a segunda nota do usuário %d (%d-%d): ", i + 1, NOTA_MIN, NOTA_MAX);
        scanf("%lf", &nota2[i]);
    }

    mediaAluno(media, nota1, nota2, tam);
    mediaDaTurma = mediaTurma(media, tam);
    printf("Média da turma: %.2lf", mediaDaTurma);

    printf("\n--Alunos acima da média--\n");

    acimaMedia(media, nota1, nota2, mediaDaTurma, tam);

    return 0;
}

void mediaAluno(double v[], double nota1[], double nota2[], int n){
    for(int i = 0; i < n; i++){
        v[i] = (nota1[i] * 2 + nota2[i] * 3) / 5;
    }
}

double mediaTurma(double v[], int n){
    double soma = 0;

    for(int i = 0; i < n; i++){
        soma += v[i];
    }

    return (double) soma / n;
}

void acimaMedia(double v[], double nota1[], double nota2[], double mediaDaTurma, int n){
    for(int i = 0; i < n; i++){
        if(v[i] > mediaDaTurma){
            printf("Aluno %d -- Nota 1: %lf / Nota 2: %lf / Média = %.2lf\n", i + 1, nota1[i], nota2[i], v[i]);
        }
    }
}