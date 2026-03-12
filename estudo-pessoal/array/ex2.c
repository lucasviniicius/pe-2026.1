#include <stdio.h>

#define MAX_QTD 10

void imprimir(int v[], int n);
double calculaMedia(int v[], int n);
void quadradoElemento(int v[], int n);
void paresImpares(int v[], int n, int pares[], int impares[]);
int buscarNumero(int v[], int n);
void ordenaNumeros(int v[], int n);

int main(){
    int numeros[MAX_QTD], pares[MAX_QTD], impares[MAX_QTD];;
    double media;

    for(int i = 0; i < MAX_QTD; i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }

    media = calculaMedia(numeros, MAX_QTD);
    printf("\nMédia: %.2lf", media);

    printf("\nVetor elevedo ao quadrado: \n");
    quadradoElemento(numeros, MAX_QTD);

    paresImpares(numeros, MAX_QTD, pares, impares);

    printf("\nVetor de números pares: \n");
    imprimir(pares, MAX_QTD);

    printf("\nVetor de números ímpares: \n");
    imprimir(impares, MAX_QTD);

    buscarNumero(numeros, MAX_QTD);

    printf("\nVetor ordenado: \n");
    ordenaNumeros(numeros, MAX_QTD);
    imprimir(numeros, MAX_QTD);

    return 0;
}

void imprimir(int v[], int n){
    for(int i = 0; i < n; i++){
        if(v[i] != 0){
            printf("%d  ", v[i]);
        }
    }
}

double calculaMedia(int v[], int n){
    int soma = 0;

    for(int i = 0; i < n; i++){
        soma += v[i];
    }

    return (double) soma / n;
}

void quadradoElemento(int v[], int n){
    int quadrados[n];

    for(int i = 0; i < n; i++){
        quadrados[i] = v[i] * v[i];
    }

    imprimir(quadrados, n);
}

void paresImpares(int v[], int n, int pares[], int impares[]){
    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            pares[i] = v[i];
            impares[i] = 0;
        } else {
            impares[i] = v[i];
            pares[i] = 0;
        }
    }
}

int buscarNumero(int v[], int n){
    int buscar = 1, num, pos;
    char resposta;

    do{
        printf("\nDeseja buscar a posição de algum número(s/n): ");
        scanf(" %c", &resposta);

        if(resposta == 's'){
            printf("\nDigite o número que deseja procurar: ");
            scanf("%d", &num);

            for(int i = 0; i < n; i++){
                if(v[i] == num){
                    printf("\nNúmero na posição: %d", i + 1);
                }
            }

            buscar = 1;
        } else {
            buscar = 0;
        }

    } while (buscar == 1);
}

void ordenaNumeros(int v[], int n){
    int temp;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(v[j] > v[j + 1]){
                temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
            }
        }
    }
}