#include <stdio.h>

// Leia um número inteiro e informe se ele é par ou ímpar.
/*
int main(){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("Par");
    } else {
        printf("Ímpar");
    }

    return 0;
}
*/

// Leia três números e mostre o maior.
/*
int main(){
    int n1, n2, n3, maior;

    printf("Digite 3 números: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 >= n2 && n1 >= n3){
        printf("Maior: %d", n1);
    } else if(n2 >= n1 && n2 >= n3){
        printf("Maior: %d", n2);
    } else {
        printf("Maior: %d", n3);
    }

    return 0;
}
*/

// Leia um número e mostre sua tabuada de 1 a 10 usando for.
/*
int main(){
    int n, mult;

    printf("Digite um número: ");
    scanf("%d", &n);

    for(int i = 0; i <= 10; i++){
        mult = n * i;

        printf("%d x %d = %d\n", n, i, mult);
    }

    return 0;
}
*/

// Leia um número e mostre a contagem regressiva até 0 usando do while.

int main(){
    int n, reg = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    while(n > 0){
        n--;
        printf("%d\n", n);
    }

    return 0;
}