#include <stdio.h>

#define MAX_QTD 50
#define MIN_QTD 2
#define MAX_IDADE 130
#define MIN_IDADE 1

void preencherIdade(int v[], int n);
double calculaMedia(int v[], int n);
void idadesMaiorIgualMedia(int v[], int n, double media);
int buscaSequencial(int v[], int n, int x);
void buscarIdades(int v[], int n);

int main(){
    int tam, idades[MAX_QTD];
    double media;

    do {
        printf("Digite a quantidade de participantes(%d-%d): ", MIN_QTD, MAX_QTD);
        scanf("%d", &tam);
    } while (tam < MIN_QTD || tam > MAX_QTD); 

    preencherIdade(idades, tam);

    media = calculaMedia(idades, tam);
    printf("\nMédia de idade dos participantes: %.2lf\n", media);

    idadesMaiorIgualMedia(idades, tam, media);

    buscarIdades(idades, tam);

    return 0;
}

void preencherIdade(int v[], int n){
    for(int i = 0; i < n; i++){
        do {
            printf("Digite a idade do %dº participante(%d-%d): ", i + 1, MIN_IDADE, MAX_IDADE);
            scanf("%d", &v[i]);
        } while (v[i] < MIN_IDADE || v[i] > MAX_IDADE);
    }
}

double calculaMedia(int v[], int n){
    int soma = 0;

    for(int i = 0; i < n; i++){
        soma += v[i];
    }

    return (double) soma / (double) n;
}

void idadesMaiorIgualMedia(int v[], int n, double media){
    printf("\nIdades maiores ou iguais a média:\n");

        for(int i = 0; i < n; i++){
            if(v[i] >= media){
                printf("%d\n", v[i]);
            }
        }
}

int buscaSequencial(int v[], int n, int x){
    for(int i = 0; i < n; i++){
        if(v[i] == x){
            return i;
        }
    }

    return -1;
}

void buscarIdades(int v[], int n){
   int pos, idade;

   printf("Digite a idade que deseja buscar: ");
   scanf("%d", &idade);

   while(idade > 0){
    pos = buscaSequencial(v, n, idade);

    if(pos != -1){
        printf("Idade na posição %d\n", pos + 1);
    } else {
        printf("Idade não encontrada!\n");
    }

    printf("Digite a idade que deseja buscar(0 p/sair)? ");
    scanf("%d", &idade);
   }
}