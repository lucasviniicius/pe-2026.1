#include <stdio.h>

#define MAX_QTD 5

void imprimir(int v[], int n);
void bubblueSort(int v[], int n);
void selectionSort(int v[], int n);
void insertionSort(int v[], int n);

int main(){
    int numeros[] = {5,3,8,2,1};

    printf("Vetor desordenado:\n");
    imprimir(numeros, MAX_QTD);

    printf("\nBubble short: \n");
    bubblueSort(numeros, MAX_QTD);
    imprimir(numeros, MAX_QTD);

    printf("\nSelection sort: \n");
    selectionSort(numeros, MAX_QTD);
    imprimir(numeros, MAX_QTD);

    printf("\nInsection sort: \n");
    insertionSort(numeros, MAX_QTD);
    imprimir(numeros, MAX_QTD);

    return 0;
}

void imprimir(int v[], int n){
    for(int i = 0; i < n; i ++){
        printf("%d ", v[i]);
    }
}

/*void bubblueSort(int v[], int n){
    int temp;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(v[j] > v[j + 1]){
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}*/

void bubblueSort(int v[], int n){
    int temp;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(v[j] > v[j + 1]){
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

/*void selectionSort(int v[], int n){
    int min, temp;

    for(int i = 0; i < n - 1; i++){
        min = i;

        for(int j = n + 1; j < n; j++){
            if(v[j] < v[min]){
                min = j;
            }
        }

        temp = v[i];
        v[i] = v[min];
        v[min] = temp;
    }
}*/

void selectionSort(int v[], int n){
    int min, temp;

    for(int i = 0; i < n - 1; i++){
        min = i;

        for(int j = n + 1; j < n; j++){
            if(v[j] < v[min]){
                min = j;
            }
        }

        temp = v[i];
        v[i] = v[min];
        v[min] = temp;
    }
}

/*void insertionSort(int v[], int n){
    int key, j;

    for(int i = 1; i < n; i++){
        key = v[i];
        j = i - 1;

        while(j >= 0 && v[j] > key){
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }
}*/

void insertionSort(int v[], int n){
    int key, j;

    for(int i = 1; i < n; i++){
        key = v[i];
        j = i - 1;

        while(j >= 0 && v[j] > key){
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }
}