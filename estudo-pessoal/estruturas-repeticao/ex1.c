#include <stdio.h>

// Renderiza numeros de 1 a 10

/*
int main(){
    int num;

    for(num = 1; num <= 10; num++){
        printf("%d\n", num);
    }

    return 0;
}
*/

// O usuário digita um número inteiro N, calcule a soma de 1 até N

/*
int main(){
    int n, i, sum = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum = sum + i;
        printf("%d\n", sum);
    }

    return 0;
}
*/

// Usuário digita números, soma todos os números digitados e para quando o usuário digitar 0

/*
int main(){
    int n, sum = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while(n != 0){
        sum = sum + n;
        printf("Digite um numero: ");
        scanf("%d", &n);
    }

    printf("Soma: %d", sum);

    return 0;
}
*/

// Digita a senha até o usuário digitar 1234, caso acerte, mostra: Acesso permitido

/*
int main(){
    int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
    } while (senha != 1234);

    printf("Acesso permitido");

    return 0;
}
*/

// Digita 10 números, conta quantos são pares, mostra a quantidade no final

/*
int main(){
    int n, p = 0, i;

    for(i = 1;i <= 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &n);

        if(n % 2 == 0){
            p++;
        }
    }

    printf("Total de pares: %d", p);

    return 0;
}
*/

// Le 5 números, calcula a média

int main(){
    int i, n, sum = 0;
    float m = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite um número: ");
        scanf("%d", &n);

        sum = sum + n;
    }

    m = sum/5;
    printf("Média: %f", m);

    return 0;
}