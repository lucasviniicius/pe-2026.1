#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void imprimirMatriz(int m[][100], int lin, int col);
void multiplicarMatrizes(int a[][100], int b[][100], int resultado[][100], int linA, int colA, int linB, int colB);
int ehIdentidade(int m[][100], int n);
int determinante3x3(int m[][100]);
int diferencaDiagonais(int m[][100], int n);
int somaVetor(int v[], int n);
int somaMatriz(int m[][100], int lin, int col);

int main(){
    srand(time(NULL));

    int n = 10;
    int linhas = 3, colunas = 3;

    int v[n];
    int m1[MAX][MAX], m2[MAX][MAX], resultadoMult[MAX][MAX], resultadoIdent, resultadoDet, resultadoSomaVetor,
    resultadoSomaMatriz;

    for(int i = 0; i < n; i++) {
        v[i] = rand() % 8; 
    }

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            m1[i][j] = rand() % 4;
            m2[i][j] = rand() % 4;
        }
    }

    printf("Vetor:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    // Mostrar matriz
    printf("\n\nMatriz 1:\n");
    imprimirMatriz(m1, linhas, colunas);

    printf("\n\nMatriz 2:\n");
    imprimirMatriz(m2, linhas, colunas);

    printf("\n\n1. Multiplicação de matrizes:\n");
    multiplicarMatrizes(m1, m2, resultadoMult, linhas, colunas, linhas, colunas);
    imprimirMatriz(resultadoMult, linhas, colunas);

    printf("\n\n2. Verifica se é identidade:\n");
    resultadoIdent = ehIdentidade(m1, linhas);
    printf("%d", resultadoIdent);

    printf("\n\n3. Determinante 3x3:\n");
    resultadoDet = determinante3x3(m1);
    printf("%d\n", resultadoDet);

    printf("\n\n4. Subtração das diagonais:\n");
    diferencaDiagonais(m1, linhas);

    printf("\n\n5. Soma de vetor:\n");
    resultadoSomaVetor = somaVetor(v, n);
    printf("%d", resultadoSomaVetor);

    printf("\n\n6. Soma de matriz:\n");
    resultadoSomaMatriz = somaMatriz(m1, linhas, colunas);
    printf("%d", resultadoSomaMatriz);

    return 0;
}


void imprimirMatriz(int m[][100], int lin, int col){
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrizes(int a[][100], int b[][100], int resultado[][100], int linA, int colA, int linB, int colB){
    if(colA != linB){
        printf("Não atende a condição de multiplicação de matrizes!");
        return;
    }

    for(int i = 0; i < linA; i++){
        for(int j = 0; j < colB; j++){
            resultado[i][j] = 0;

            for(int k = 0; k < colA; k++){
                resultado[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int ehIdentidade(int m[][100], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j && m[i][j] != 1) return 0;
            if(i != j && m[i][j] != 0) return 0;
        }
    }

    return 1;
}

int determinante3x3(int m[][100]){
    int resultado = 0;

    resultado = m[0][0]*m[1][1]*m[2][2]+m[0][1]*m[1][2]*m[2][0]+m[0][2]*m[1][0]*m[2][1]-m[2][0]*m[1][1]*m[0][2]-
    m[2][1]*m[1][2]*m[0][0]-m[2][2]*m[1][0]*m[0][1];

    return resultado;
}

int diferencaDiagonais(int m[][100], int n){
    int digPrincipal = 0, digSecundaria = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                digPrincipal += m[i][j];
            }
            if(i + j == n - 1){
                digSecundaria += m[i][j];
            }
        }
    }

    printf("%d", digPrincipal - digSecundaria);
}

int somaVetor(int v[], int n){
    int soma = 0;

    for(int i = 0; i < n; i++){
        soma += v[i];
    }

    return soma;
}

int somaMatriz(int m[][100], int lin, int col){
    int soma = 0;

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            soma += m[i][j];
        }
    }

    return soma;
}

