#include <stdio.h>

int main(){
    int numero = 0, contador = 0;

    printf("Ingresa un numero: ");
    scanf("%i", &numero);

    for(int i=1; i<=numero ;i ++){
        if(numero % i == 0){
            contador = contador + 1;
        }
    }

    if(contador == 2){
        printf("Este numero es primo");
    }else{
        printf("Este numero no es primo");
    }
    return 0;
}