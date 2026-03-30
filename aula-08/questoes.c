#include <stdio.h>

#define LIN 3
#define COL 3

void imprimirMatriz(int m[][COL], int lin, int col);
void somarMatrizes(int mA[][COL], int mB[][COL], int mSoma[][COL], int lin, int col);
void matrizTransposta(int mQuadrada[][COL], int lin, int col);
void multMatriz(int mA[][COL], int mB[][COL], int mMult[][COL], int linA, int colA, int linB, int colB);

int main(){
    int mA[LIN][COL], mB[LIN][COL], mSoma[LIN][COL], mMult[LIN][COL];

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("Digite o valor de mA[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mA[i][j]);
        }
    }

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("Digite o valor de mB[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mB[i][j]);
        }
    }

    printf("Matriz A\n");
    imprimirMatriz(mA, LIN, COL);
    printf("\n");
    printf("Matriz B\n");
    imprimirMatriz(mB, LIN, COL);

    somarMatrizes(mA, mB, mSoma, LIN, COL);
    printf("\nSoma das matrizes\n ");
    imprimirMatriz(mSoma, LIN, COL);

    printf("\nMultiplicação\n");
    multMatriz(mA, mB, mMult, LIN, COL, LIN, COL);
    imprimirMatriz(mMult, LIN, COL);

    printf("\nTransposta de A\n");
    matrizTransposta(mA, LIN, COL);
    imprimirMatriz(mA, LIN, COL);

    return 0;
}

void imprimirMatriz(int m[][COL], int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void somarMatrizes(int mA[][COL], int mB[][COL], int mSoma[][COL], int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            mSoma[i][j] = mA[i][j] + mB[i][j];
        }
    }
}

void matrizTransposta(int mQuadrada[][COL], int lin, int col){
    int aux;

    if(lin != col){
        printf("A matriz precisa ter o números de linha e colunas iguais!");
        return;
    }

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(j > i){
                aux = mQuadrada[i][j];
                mQuadrada[i][j] = mQuadrada[j][i];
                mQuadrada[j][i] = aux;
            }
        }
    }
}

void multMatriz(int mA[][COL], int mB[][COL], int mMult[][COL], int linA, int colA, int linB, int colB){
    if(colA != linB){
        printf("O números de colunas da primeira matriz precisa ser igual ao números de linhas da segunda matriz!");
        return;
    }

    for(int i = 0; i < linA; i++){
        for(int j = 0; j < colB; j++){
            mMult[i][j] = 0;

            for(int k = 0; k < colA; k++){
                mMult[i][j] += mA[i][k] * mB[k][j];
            }
        } 
    }
}