#include <stdio.h>
#include <stdlib.h>

int ex1()
{
    int fixe[5] = {10,20,30,40,50};
    int length = sizeof(fixe)/sizeof(fixe[0]);
    for(int i = 0; i < length;i++){
    printf("O %d elemento é: %d \n", i, fixe[i]);
    }
    invert(fixe, length);
    return 0;
}

int invert(int arr[],int length){
    int savenr = 0;
    int j = length-1;
    printf("\n \n Agora o invertido \n");
    for(int i = 0; i < length/2;i++,j--){
        savenr = arr[i];
        arr[i] = arr[j];
        arr[j] = savenr;
    }
    for(int a = 0; a < length;a++){
                    printf("O %d elemento é: %d \n", a, arr[a]);
    }


}

int testeex(){
    int nrs = 0;
    int numero = 0;
    int soma = 0;
    printf("Quandos numeros quer inserir? ");
    scanf("%d", &nrs);
    printf("\n Escreva os numeros: ");
    for(int i = 0; i < nrs;i++){
        scanf("%d", &numero);
        if(numero % 2 == 0){
            soma+=numero;
        }
    }
    printf("A soma é %d" , soma);
    return 0;
}
int main(){
    printf("Hello World \n");
    printf("\n");
    return 0;
}