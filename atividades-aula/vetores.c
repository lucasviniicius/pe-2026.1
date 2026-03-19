#include <stdio.h>

#define MAX 50

void insercaoOrdenada(int v[], int n, int x);
void imprimir(int v[], int n);
int buscaBinaria(int v[], int n, int valor);
int remover(int v[], int n);

int main(){
    int n, num[MAX], menu, resultadoBusca, valorBusca, valorInserir;

    do {
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);
    } while(n < 3 || n > 50);

    for(int i = 0; i < n; i++){
        int valor;

        printf("Digite o %dº valor do vetor: ", i + 1);
        scanf("%d", &valor);
        insercaoOrdenada(num, i, valor);
    }    

    do {
        printf("\n--MENU--\n");
        printf("a) Digite 1 para para IMPRIMIR\n");
        printf("b) Digite 2 para para CONSULTAR\n");
        printf("c) Digite 3 para para REMOVER\n");
        printf("d) Digite 4 para para ADICIONAR\n");
        printf("e) Digite 0 para SAIR\n");
        scanf("%d", &menu);

        switch(menu){
            case 1: 
                imprimir(num, n);
                break;
            case 2:
                printf("\n--CONSULTA--\n");
                printf("Digite o valor que deseja buscar: ");
                scanf("%d", &valorBusca);
                resultadoBusca = buscaBinaria(num, n, valorBusca);
                printf("Número na posição: %d\n", resultadoBusca);
                break;
            case 3:
                n = remover(num, n);
                break;
            case 4:
                if(n < MAX){
                    printf("\n--INSERIR--\n");
                    printf("Digite o valor que deseja inserir: ");
                    scanf("%d", &valorInserir);
                    insercaoOrdenada(num, n, valorInserir);
                    n++;
                } else {
                    printf("Vetor cheio!");
                }
                break;

        }   
    } while(menu != 0);

    return 0;
}

void insercaoOrdenada(int v[], int n, int x){
    int pos = n;

    while(pos > 0 && v[pos - 1] > x){
        v[pos] = v[pos - 1];
        pos--;
    }

    v[pos] = x;
}

void imprimir(int v[], int n){
    printf("\n--IMPRESSÃO--\n");

    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    printf("\n");
}

int buscaBinaria(int v[], int n, int valor){
    int inicio = 0, fim = n - 1;

    while(inicio <= fim){
        int meio = inicio + (fim - inicio) / 2;

        if(v[meio] == valor){
            return meio;
        } else if(v[meio] > valor){
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    printf("\n");

    return -1;
}

int remover(int v[], int n){
    int pos, valor;

    printf("\n--REMOVER--\n");
    printf("Digite o valor que deseja remover: ");
    scanf("%d", &valor);

    pos = buscaBinaria(v, n, valor);

    if(pos == -1){
        printf("Valor não foi encontrado!");
        return n;
    }

    for(int i = pos; i < n - 1; i++){
        v[i] = v[i + 1];
    }

    printf("Removido com sucesso!\n");

    return n - 1;
}

