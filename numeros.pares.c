#include <stdio.h>



int main(){
    int numero;
    printf("Escribe un numero: ");
    scanf("%i", &numero);

    if(numero % 2 == 0){
        printf("El numero es par");
    }else{
        printf("El numero es impar");
    }
    
}