#include <stdio.h>

#define LIN 3
#define COL 3

void preencherMatriz(int m[][COL], int lin, int col);
void imprimirMatriz(int m[][COL], int lin, int col);
void maiorValorMatriz(int m[][COL], int lin, int col);
void menorValorMatriz(int m[][COL], int lin, int col);
void diagonalPrincipal(int m[][3], int n);
void zerarAbaixoDigPrincipal(int m[][COL], int lin, int col);
void zerarAbaixoDigSecundaria(int m[][COL], int lin, int col);

int main(){
    int m[LIN][COL];

    preencherMatriz(m, LIN, COL);
    printf("\nMatriz Digitada\n");
    imprimirMatriz(m, LIN, COL);
    maiorValorMatriz(m, LIN, COL);
    menorValorMatriz(m, LIN, COL);
    diagonalPrincipal(m, 3);
    zerarAbaixoDigPrincipal(m, LIN, COL);
    zerarAbaixoDigSecundaria(m, LIN, COL);

    return 0;
}

void preencherMatriz(int m[][COL], int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("Digite o valor de m[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

void imprimirMatriz(int m[][COL], int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%d\t", m[i][j]);
        }

        printf("\n");
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

    printf("\nMaior valor da matriz na posição m[%d][%d]: %d", iMaior + 1, jMaior + 1, m[iMaior][jMaior]);
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

    printf("\nMenor valor da matriz na posição m[%d][%d]: %d", iMenor + 1, jMenor + 1, m[iMenor][jMenor]);
}

void diagonalPrincipal(int m[][COL], int n){
    printf("\nDiagonal principal: ");

    for(int i = 0; i < n; i++){
        printf("%d\t", m[i][i]);
    }

    printf("\n");
}

void zerarAbaixoDigPrincipal(int m[][COL], int lin, int col){
    if(lin != col){
        printf("A matriz precisa ser quadrada!");
        return;
    }

    printf("\nZeros abaixo da diagonal principal\n");

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(i > j){
                m[i][j] = 0;
            }

            printf("%d\t", m[i][j]);
        }

        printf("\n");
    }
}

void zerarAbaixoDigPrincipalOtimizada(int m[][COL], int lin, int col){
    if(lin != col){
        printf("A matriz precisa ser quadrada!");
        return;
    }

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < i; j++){
            m[i][j] = 0;
        }
    }
}