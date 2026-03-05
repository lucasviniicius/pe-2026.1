#include <stdio.h>

#define MAX 50

void preencherVetor(int v[], int n);
void imprimirVetor(int v[], int n);
void ordenar(int v[], int n);
void imprimirMaiorImpar(int v[], int n);
void criarParesImpares(int v[], int n, int pares [], int impares[]);

int main(){
    int tam;
    int vetor[MAX];
    int pares[MAX];
    int impares[MAX];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    preencherVetor(vetor, tam);
    imprimirVetor(vetor, tam);
    ordenar(vetor, tam);

    printf("Vetor ordenado: ");
    imprimirVetor(vetor, tam);

    imprimirMaiorImpar(vetor, tam);

    criarParesImpares(vetor, tam, pares, impares);

    printf("Vetor par: ");
    imprimirVetor(pares, tam);

    printf("Vetor ímpar: ");
    imprimirVetor(impares, tam);

    return 0;
}

void preencherVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("Digite o valor do vetor no campo %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void imprimirVetor(int v[], int n){
    printf("{");

    for(int i = 0; i < n; i++){
        printf("%d, ", v[i]);
    }

    printf("}\n");
}

void ordenar(int v[], int n){
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

void imprimirMaiorImpar(int v[], int n){
    int valor = -1;

    for(int i = 0; i < n; i++){
        if(v[i] % 2 != 0){
            if(v[i] > valor){
                valor = v[i];
            }
        }
    }

    if(valor == -1){
        printf("Não há valores ímpares no vetor!");
    } else {
        printf("Maior valor ímpar: %d", valor);
    }
}

void criarParesImpares(int v[], int n, int pares[], int impares[]){
    int par = 0;
    int impar = 0;

    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            pares[par] = v[i];
            par++;
        } else {
            impares[impar] = v[i];
            impar++;
        }
    }

    while(par < n){
        pares[par] = -1;
        par++;
    }

    while(impar < n){
        impares[impar] = -1;
        impar++;
    }
}