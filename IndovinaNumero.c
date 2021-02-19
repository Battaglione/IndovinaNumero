#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generanumero(int numero);
void indovinaNumero(int numero);

int main(){
    int numero;
    numero = generanumero(numero);
    indovinaNumero(numero);
    return 0;
}

int generanumero(int numero){
    srand(time(NULL));
    numero = rand() % 100;
}
void indovinaNumero(int numero){
    int tentativi, input, cont;
    cont = 0;
    for(tentativi = 10; tentativi > 0; tentativi--){
        printf("Hai %d tentativi, inserisci il numero (suggerimento: il numero e' tra 0 e 100): ", tentativi);
        scanf("%d", &input);
        cont++;
        if(input == numero){
            printf("INDOVINATO IN %d TENTATIVI\n", cont);
            break;
        }
        else{
            if(input > numero){
                printf("Il numero inserito e' troppo grande\n");
            }
            else{
                printf("Il numero inserito e' troppo piccolo\n");
            }
        }
    }
    if(tentativi == 0){
        printf("HAI PERSO, IL NUMERO ERA %d", numero);
    }
}