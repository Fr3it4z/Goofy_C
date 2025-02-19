#include <stdio.h>
#include <stdlib.h>

float array[5] = {14.4,15.5,13.4,14.5,17.2};

int ex1_1()
{
    int array[2][3]={{1,3,5},{2,4,6}};
    for(int i = 0; i < 3;i++){
    for(int o = 0;o< 2;o++){
        printf("%d", array[o][i]);
    }
        }
    return 0;
}

int ex1_2(){
int fixe[5] = {1,2,3,4,5};

for(int i = 0; i < 5;i++){

printf("Elemento %d: %d   ", i , fixe[i]);
}

return 0;
}

int ex2(){
int fixe[5] = {1,2,3,4,5};

for(int i = 0; i < 5;i++){
fixe[i] = (i+1)*10;
printf("Elemento %d: %d   ", i , fixe[i]);
}
return 0;
}

int ex3(){
int fixe[5] = {1,2,3,4,5};
int soma = 0;
for(int i = 0; i < 5;i++){
soma+=fixe[i];
printf("%d \n", soma);
}
printf("A soma de todos os elementos é: %d", soma);
return 0;
}


int ex4(){
int fixe[5] = {3,7,2,9,5};
int maior = 0;
for(int i = 0; i < 5; i++){

if(maior < fixe[i]){
maior = fixe[i];
}
}
printf("O maior numero é: %d", maior);

return 0;
}

int ex5(){
int fixe[5] = {10,20,30,40,50};
float media = 0;

for(int i = 0; i < 5; i++){
media+=fixe[i];

}
printf("A média é %.2f", media/5);

return 0;
}

int ex6(){
int fixe[5] = {10,20,30,40,50};


for(int i = 0; i < 5; i++){
printf("Elemento %d: %d   ", i , fixe[i]);
}
inverte(fixe[5]);

return 0;
}
int inverte(int a[]){
int b[5];
for(int i = 0; i < 5; i++){
    for(int c = 5; c>0;c++){
        b[i] = a[c];
    }
}
for(int i = 0; i < 5; i++){
printf("%d",b[i]);

}
}

int ex7(){
int fixe[5] = {10,20,30,40,50};
int nr = 0;
printf("Digite um numero para ser encontrado: ");
scanf("%d", &nr);
for(int i = 0; i<sizeof(fixe); i++){
if(nr==fixe[i]){
printf("     Elemento %d encontrado na posição %d.", nr,i);
}
}
return 0;
}


int main(){
int fixe[3][3]={{1,4,7},{2,5,8},{3,6,9}};

    for(int i = 0; i < 3;i++){
    for(int o = 0;o< 3;o++){
        printf("%d", fixe[o][i]);
    }
    printf("\n");
        }

return 0;
}





