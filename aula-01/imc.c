#include <stdio.h>

float calculaIMC(float p, float a);
char* classificaIMC(float imc);

int main(){
    float peso, altura, imc;
    char* classificacao;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = calculaIMC(peso, altura);
    classificacao = classificaIMC(imc);

    printf("Seu IMC é: %.2f\n", imc);
    printf("Classificação: %s\n", classificacao);

    return 0;
}

float calculaIMC(float p, float a){
    return p / (a * a);
}

char* classificaIMC(float imc){
    if(imc < 16.9){
        return "Muito abaixo do peso";
    } else if(imc >= 17 && imc < 18.4){
        return "Abaixo do peso";
    } else if(imc >= 18.5 && imc < 24.9){
        return "Peso normal";
    } else if(imc >= 25 && imc < 29.9){
        return "Acima do peso";
    } else if(imc >= 30 && imc < 34.9){
        return "Obesidade grau 1";
    } else if(imc >= 35 && imc < 39.9){
        return "Obesidade grau 2";
    } else {
        return "Obesidade grau 3";
    }
}