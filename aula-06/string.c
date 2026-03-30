#include <stdio.h>
#include <string.h>

#define MAX 50

void lerStr(char str[], int tam);
int meuStrLen(char str[]);

int main(){
    char mensagem[MAX] = "Boas-vindas a turma de PE";
    int tamanhoString = meuStrLen(mensagem);

    printf("%s", mensagem);
    lerStr(mensagem, MAX);

    printf("\nTamanho da string: %d", tamanhoString);
}

void lerStr(char str[], int tamMax){
    fgets(str, tamMax, stdin);

    int tam = strlen(str);

    if(tam > 0 && str[tam - 1] == '\n'){
        str[tam - 1] = '\0';
    }
}

int meuStrLen(char str[]){
    int tam = 0;

    while(str[tam] != '\0'){
        tam++;
    }

    return tam;
}