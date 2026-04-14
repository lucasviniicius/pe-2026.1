#include <stdio.h>

#define TAM 5
#define LIN 3
#define COL 3

void lerVetor(int v[], int n);
void imprimirVetor(int v[], int n);
int encontrarMaior(int v[], int n);
void media(int v[], int n);
void bublueSort(int v[], int n);
void lerMatriz(int m[][COL], int lin, int col);
void imprimirMatriz(int m[][COL], int lin, int col);
void somarMatriz(int m[][3], int lin, int col);
void somarDiagonalPrincipal(int m[][COL], int n);
void transporMatriz(int origem[][3], int n);

int main(){
    int v[TAM], m[LIN][COL];

    /*lerVetor(v, TAM);
    imprimirVetor(v, TAM);
    encontrarMaior(v, TAM);
    media(v, TAM);
    bublueSort(v, TAM);
    imprimirVetor(v, TAM);*/
    lerMatriz(m, LIN, COL);
    imprimirMatriz(m, LIN, COL);
    somarMatriz(m, LIN, COL);
    somarDiagonalPrincipal(m, LIN);
    transporMatriz(m, LIN);

    return 0;
}

void lerVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("Digite um número: ");
        scanf("%d", &v[i]);
    }
}

void imprimirVetor(int v[], int n){
    printf("\nVetor: \n");

    for(int i = 0; i < n; i++){
        printf("%d\t", v[i]);
    }
}

int encontrarMaior(int v[], int n){
    int maior = 0, pos = 0;

    for(int i = 0; i < n; i++){
        if(maior < v[i]){
            maior = v[i];
            pos = i;
        }
    }

    printf("\nMaior valor da matriz é %d e está na posição %d!", maior, pos + 1);
}

void media(int v[], int n){
    int soma = 0;
    double media = 0;

    for(int i = 0; i < n; i++){
        soma += v[i];
    }

    media = soma / (double) n;

    printf("\nA média é: %lf", media);
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

void lerMatriz(int m[][COL], int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("\nDigite o valor de m[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

void imprimirMatriz(int m[][COL], int lin, int col){
    printf("\nMatriz: \n");

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void somarMatriz(int m[][3], int lin, int col){
    int mSum = 0;;

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            mSum += m[i][j];
        }
    }

    printf("\nA soma dos elementos da matriz é: %d", mSum);
}

void somarDiagonalPrincipal(int m[][COL], int n){
    int digSum = 0;

    for(int i = 0; i < n; i++){
        digSum += m[i][i];
    }

    printf("\nA soma da diagonal principal é: %d", digSum);
}

void transporMatriz(int origem[][3], int n){
    int aux;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j > i){
                aux = origem[i][j];
                origem[i][j] = origem[j][i];
                origem[j][i] = aux;
            }
        }
    }

    printf("\nA transposta da matriz é: \n");
    imprimirMatriz(origem, n, n);
}