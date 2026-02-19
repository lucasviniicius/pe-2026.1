#include <stdio.h>

// Descobrir se o número digitado é positivo, negativo ou igual a 0.

/*
int main(){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num > 0){
        printf("Positivo");
    } else if (num == 0){
        printf("Neutro");
    } else {
        printf("Negativo");
    }

    return 0;
}
*/

// Aprovação, recuperação ou reprovado

/*
int main(){
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if(nota < 0 || nota > 10){
        printf("Nota inválida\n");
        return 1;
    }

    if(nota >= 7){
        printf("Aprovado");
    } else if(nota >= 5 && nota < 6.9){
        printf("Recuperação");
    } else {
        printf("Reprovado");
    }

    return 0;
}
*/

// Define se pode votar de acordo com a idade

/*
int main(){
    char nome[50];
    int idade;

    printf("Digite seu nome e sobrenome: ");
    fgets(nome, 50, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 70 || (idade == 16 || idade == 17)){
        printf("%s seu voto e facultativo!", nome);
    } else if(idade >= 18 && idade <= 69){
        printf("%s seu voto e obrigatorio!", nome);
    } else {
        printf("%s não pode votar!", nome);
    }

    return 0;
}
*/

// Calculadora


int main(){
    float num1, num2, result;
    char operator;

    printf("---CALCULADORA--\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o operador (*, /, +, -): ");
    scanf(" %c", &operator);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if(num2 == 0 && operator == '/'){
        printf("Divisão invalida");
        return 1;
    } else if(operator != '*' && operator != '/' && operator != '+' && operator != '-'){
        printf("Operador invalido");
        return 1;
    }

    switch (operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            result = num1/num2;
            break;
        default:
            result = num1 * num2;
    }

    printf("Resultado: %.f", result);

    return 0;
}
