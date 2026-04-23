#include <stdio.h>

void swap(int *a, int *b);
void dobrar(int *x);
void maior(int a, int b, int *resultado);
void imprimirVetor(int v[], int n);
void somaVetor(int v[], int n, int *soma);
void incrementar(int *v, int n);
void maiorVetor(int v[], int n, int *maior);
void contarPares(int v[], int n, int *quantidade);
void media(int v[], int n, float *resultado);
void contar(int v[], int n, int *pares, int *impares);
void bubblesort(double v[], int n);

int main(){
    int x = 10, y = 20;
    
    swap(&x, &y);
    printf("x = %d e y = %d", x, y);

    printf("\n");

    dobrar(&x);
    printf("Dobro de x é %d", x);

    printf("\n");

    int r;
    maior(x, y, &r);
    printf("Maior valor é: %d", r);

    printf("\n");

    int v[] = {2, 5, 7, 2}, s = 0; 
    imprimirVetor(v, 4);
    somaVetor(v, 4, &s);
    printf("Soma do vetor: %d", s);

    printf("\n");

    incrementar(v, 4);
    printf("Vetor incrementado: ");
    imprimirVetor(v, 4);

    printf("\n");
    
    int m = 0;
    maiorVetor(v, 4, &m);
    printf("Maior valor do vetor: %d", m);

    printf("\n");

    int q = 0;
    contarPares(v, 4, &q);
    printf("Quantidade de pares: %d", q);

    printf("\n");

    float rMedia; 
    media(v, 4, &rMedia);
    printf("Média do vetor: %f", rMedia);

    printf("\n");
    int p, i;
    contar(v, 4, &p, &i);
    printf("Quantidades de pares é %d, e ímpares é %d", p, i);

    printf("\n");

    double vOrdenado[] = {2, 5, 7, 2};
    printf("Vetor ordenado:");
    bubblesort(vOrdenado, 4);
    imprimirVetor(vOrdenado, 4);

    return 0;
}

void swap(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void dobrar(int *x){
    *x = *x * 2;
}

void maior(int a, int b, int *resultado){
    if(a > b){
        *resultado = a;
    } else {
        *resultado = b;
    }
}

void imprimirVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", v[i]);
    }
}

void somaVetor(int v[], int n, int *soma){
    for(int i = 0; i < n; i++){
        *soma += v[i];
    }
}

void incrementar(int *v, int n){
    for(int i = 0; i < n; i++){
        *(v + i) += 1;
    }
}

void maiorVetor(int v[], int n, int *maior){
    for(int i = 0; i < n; i++){
        if(v[i] > *maior){
            *maior = v[i];
        }
    }
}

void contarPares(int v[], int n, int *quantidade){
    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            *quantidade += 1;
        }
    }
}

void media(int v[], int n, float *resultado){
    int soma = 0;

    for(int i = 0; i < n; i++){
        soma += v[i];
    }

    *resultado = (float)soma / n;
}

void contar(int v[], int n, int *pares, int *impares){
    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            *pares += 1;
        } else {
            *impares += 1;
        }
    }
}

void bubblesort(double v[], int n) {
    int i, fim, pos, troca;
    double chave;

    troca = 1, fim = n - 1, pos = 0;

    while(troca == 1){
        troca = 0; 
        
        for(int i = 0; i <= fim; i++){
            if(v[i] > v[i + 1]){
                chave = v[i];
                v[i] = v[i + 1];
                v[i + 1] = chave;
                pos = i;
                troca = 1;
            }
        }

        fim = pos - 1;
    }
}