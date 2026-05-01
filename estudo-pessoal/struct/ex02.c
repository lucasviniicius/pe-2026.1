#include <stdio.h>
#include <string.h>

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

struct Produtos {
    int codigo;
    char descricao[50];
};

struct Item {
    int id;
    int quantidade;
};

void lerStr(char str[], int tamMAX);
/*void preencher(struct Funcionario *f, int tam);
void imprimir(struct Funcionario *f, int tam);*/

/*void preencher(struct ContaBancaria *cf);
void transferir(struct ContaBancaria *origem, struct ContaBancaria *destino, float quantia);*/

/*void preencher(struct Aluno *a, int tam);
struct Resultado buscarExtremos(struct Aluno a[], int tam);
void alunoMaiorMenor(struct Aluno a[], int tam);*/

/*void preencher(struct Produtos *p);
void marcarComoEsgotado(struct Produtos *p);*/


int main(){
    struct Funcionario funcionarios[3];
    struct ContaBancaria contaOrigem, contaDestino;
    struct Aluno alunos[3];
    struct Produtos produto;

    /*preencher(funcionarios, QTD_FUNC);
    imprimir(funcionarios, QTD_FUNC);*/
    /*preencher(&contaOrigem);
    preencher(&contaDestino);
    transferir(&contaOrigem, &contaDestino, 100);

    printf("Conta de origem: %f\n", contaOrigem.saldo);
    printf("Conta de destino: %f", contaDestino.saldo);*/

    /*preencher(alunos, 3);
    alunoMaiorMenor(alunos, 3);*/

    /*preencher(&produto);
    printf("\nStatus atual: %s\n", produto.descricao);
    marcarComoEsgotado(&produto);
    printf("Novo status: %s\n", produto.descricao);*/

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

/*void preencher(struct Aluno *a, int tam){
    float n1, n2;

    for(int i = 0; i < tam; i++){
        printf("Digite seu nome: ");
        lerStr(a[i].nome, 50);
        printf("Digite o número da matrícula: ");
        scanf("%d", &a[i].matricula);
        printf("Digite a nota da prova 1: ");
        scanf("%f", &n1);
        printf("Digite a nota da prova 2: ");
        scanf("%f", &n2);
        getchar();
        a[i].media = (n1 + n2) / 2;
    }
}

struct Resultado buscarExtremos(struct Aluno a[], int tam){
    struct Resultado resp;

    resp.indiceMaior = 0;
    resp.indiceMenor = 0;

    for(int i = 0; i < tam; i++){
        if(a[i].media > a[resp.indiceMaior].media){
            resp.indiceMaior = i;
        } else if(a[i].media < a[resp.indiceMenor].media){
            resp.indiceMenor = i;
        }
    }

    return resp;
}

void alunoMaiorMenor(struct Aluno a[], int tam){
    struct Resultado res = buscarExtremos(a, 3);

    printf("Aluno com maior média: %s", a[res.indiceMaior].nome);
    printf("Aluno com menor média: %s", a[res.indiceMenor].nome);
}*/

/*void preencher(struct Produtos *p){
    printf("Digite o código do produto: ");
    scanf("%d", &p->codigo);
    getchar();
    printf("Digite a descrição do produto: ");
    lerStr(p->descricao, 50);
}

void marcarComoEsgotado(struct Produtos *p){
    char texto[50] = "PRODUTO ESGOTADO!";
    int i = 0;

    while(texto[i] != '\0'){
        p->descricao[i] = texto[i];
        i++;
    }

    p->descricao[i] = '\0';
}*/