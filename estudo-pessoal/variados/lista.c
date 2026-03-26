#include <stdio.h>

#define TAM 10
#define LIN 3
#define COL 3

// vetores
void imprimir(int v[], int n);
void preencherVetor(int v[], int n);
void maiorValor(int v[], int n);
void somaPares(int v[], int n);
void bublueSort(int v[], int n);

// matrizes
void imprimirMatriz(int m[][COL], int lin, int col);
void preencherMatriz(int m[][COL], int lin, int col);
void maiorValorMatriz(int m[][COL], int lin, int col);
void menorValorMatriz(int m[][COL], int lin, int col);
void somaDigPrincipal(int m[][COL], int n);

int main(){
    int vetor[TAM], matriz[LIN][COL];

    // vetores
    preencherVetor(vetor, TAM);
    bublueSort(vetor, TAM);
    printf("Vetor ordenado: ");
    imprimir(vetor, TAM);
    maiorValor(vetor, TAM);
    somaPares(vetor, TAM);

    // matrizes
    preencherMatriz(matriz, LIN, COL);
    imprimirMatriz(matriz, LIN, COL);
    maiorValorMatriz(matriz, LIN, COL);
    menorValorMatriz(matriz, LIN, COL);
    somaDigPrincipal(matriz, 3);

    return 0;
}

// vetores
void imprimir(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", v[i]);
    }
}

void preencherVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("Digite o valor da posição %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void maiorValor(int v[], int n){
    int maior = v[0], pos = 0;

    for(int i = 0; i < n; i++){
        if(v[i] > maior){
            maior = v[i];
            pos = i;
        }
    }

    printf("\nMaior valor do vetor é %d e está na posição %d", maior, pos + 1);
}

void somaPares(int v[], int n){
    int soma = 0;

    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            soma += v[i];
        }
    }

    printf("\nA soma dos números pares do vetor é %d", soma);
}

void bublueSort(int v[], int n){
    int temp;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(v[j] > v[j + 1]){
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

// matrizes
void imprimirMatriz(int m[][COL], int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%d\t", m[i][j]);
        }

        printf("\n");
    }
}

void preencherMatriz(int m[][COL], int lin, int col){
    printf("\n");

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("Digite o valor de m[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

void maiorValorMatriz(int m[][COL], int lin, int col){
    int iMaior = 0, jMaior = 0;

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(m[i][j] > m[iMaior][jMaior]){
                iMaior = i;
                jMaior = j;
            }
        }
    }

    printf("\nO maior valor da matriz é %d", m[iMaior][jMaior]);
}

void menorValorMatriz(int m[][COL], int lin, int col){
    int iMenor = 0, jMenor = 0;

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(m[i][j] < m[iMenor][jMenor]){
                iMenor = i;
                jMenor = j;
            }
        }
    }

    printf("\nO menor valor da matriz é %d", m[iMenor][jMenor]);
}

void somaDigPrincipal(int m[][COL], int n){
    int soma = 0;

    for(int i = 0; i < n; i++){
        soma += m[i][i];
    }

    printf("\nA soma da diagonal principal é %d", soma);
}