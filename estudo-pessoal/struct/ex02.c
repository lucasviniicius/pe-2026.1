#include <stdio.h>
#include <string.h>

// COMEÇAR NA QUESTAO 3

struct Funcionario {
    char nome[50];
    char cargo[3];
    float salario;
};

struct ContaBancaria {
    int numeroConta;
    char titular[50];
    float saldo;
};

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

struct Resultado {
    int indiceMaior;
    int indiceMenor;
};

void lerStr(char str[], int tamMAX);
/*void preencher(struct Funcionario *f, int tam);
void imprimir(struct Funcionario *f, int tam);*/

/*void preencher(struct ContaBancaria *cf);
void transferir(struct ContaBancaria *origem, struct ContaBancaria *destino, float quantia);*/

int main(){
    struct Funcionario funcionarios[3];
    struct ContaBancaria contaOrigem, contaDestino;
    struct Aluno alunos[5];

    /*preencher(funcionarios, QTD_FUNC);
    imprimir(funcionarios, QTD_FUNC);*/
    /*preencher(&contaOrigem);
    preencher(&contaDestino);
    transferir(&contaOrigem, &contaDestino, 100);

    printf("Conta de origem: %f\n", contaOrigem.saldo);
    printf("Conta de destino: %f", contaDestino.saldo);*/

    return 0;
}

void lerStr(char str[], int tamMAX){
    fgets(str, tamMAX, stdin);

    int tam = strlen(str);

    if(tam > 0 && str[tam - 1] == '\n'){
        str[tam - 1] = '\0';
    }
}

/*void preencher(struct Funcionario *f, int tam){
    float reajuste = 0.1;

    for(int i = 0; i < tam; i++){
        printf("Funcionário %d - Digite seu nome: ", i + 1);
        lerStr(&f[i].nome, 50);
        printf("Funcionário %d - Digite seu cargo: ", i + 1);
        lerStr(&f[i].cargo, 50);
        printf("Funcionário %d - Digite seu salário: ", i + 1);
        scanf("%f", &f[i].salario);
        getchar();
        f[i].salario = f[i].salario + (f[i].salario * reajuste);
    }
}

void imprimir(struct Funcionario *f, int tam){
    for(int i = 0; i < tam; i++){
        printf("Nome: %s\n", f[i].nome);
        printf("Cargo: %s\n", f[i].cargo);
        printf("Salário c/ reajuste: %f\n", f[i].salario);
    }
}*/

/*void preencher(struct ContaBancaria *cf){
    printf("Digite o número da conta: ");
    scanf("%d", &cf->numeroConta);
    getchar();
    printf("Digite o nome do titular: ");
    lerStr(cf->titular, 50);
    printf("Digite seu saldo: ");
    scanf("%f", &cf->saldo);
}

void transferir(struct ContaBancaria *origem, struct ContaBancaria *destino, float quantia){
    if(origem->saldo >= quantia){
        origem->saldo = origem->saldo - quantia;
        destino->saldo = destino->saldo + quantia;
    } else {
        printf("Saldo insuficiente!");
        return;
    }
}*/