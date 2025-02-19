#include <stdio.h>
#include <stdlib.h>

int ex1(){

int a = 10, b = 5 , c = 2;

printf("%d %d %d", a ,b ,c);
return 0;
}


int ex2(){

int num1 , num2;

printf("Preciso de dois valores: ");
scanf("%d" ,&num1);
scanf("%d" ,&num2);

printf("A soma é igual a %d \n", num1+num2);
printf("A mutiplicação é igual a %d \n", num1*num2);
printf("A divisão é igual a %d \n", num1/num2);
printf("A subtração é igual a %d \n", num1-num2);

return 0;
}


int ex3(){

    float lar,alt,area;
    printf("Largura do retangulo: ");
    scanf("%f" ,&lar);
    printf("Altura do retangulo: ");
    scanf("%f" ,&alt);

    area = lar * alt;

    printf("Área do quadrado %f", area);
    return 0;
}

int ex4(){

int x , y;
printf("Preciso de dois valores o X e o Y: ");
scanf("%d" ,&x);
scanf("%d" ,&y);
if(x>y){
        printf("X é maior que Y");
}else if(x == y){
    printf("X e Y são iguais");
}else{
    printf("X é menor que Y");
}

 return 0;
}

int ex6(){

int numero;
scanf("%d", &numero);
if (numero % 2 == 0){
printf("Número é par");
}else{
printf("não é par");
}


return 0;
}
int ex7(){

float nota;

printf("A tua nota: ");
scanf("%f", &nota);
if(nota >= 9 && nota <= 10){
    printf("Aprovado, com louvor");
}else if(nota < 9 &&& nota <= 7){
    printf("Aprovado");
}else if(nota < 7 && nota >= 5){
    printf("vais a recuperação bot");
}else if(nota < 5 && nota >= 0){
    printf("Reprovado");
}else{
    printf("És tão burro que nem uma nota consegues meter");
}

return 0;
}

int main(){
    char letras[4] = ["a","b","c","d"];
    char letra;

    letra = random.choise(letras);

    printf(letra);



    return 0;
}



