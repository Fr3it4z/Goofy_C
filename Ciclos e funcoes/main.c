#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    printf("Diga um numero para saber a tabuada: \n");
    scanf("%d", &num);
    for(i = 1; i <= 10; i++){
        printf("%d X %d = %d \n",num,i, num * i);
    }
    return 0;
}

int ex2(){
int num, i = 1, soma = 0;
printf("Diga um numero: ");
scanf("%d", &num);

while(i <= num){
    printf("%d + %d = ",soma, i);
    soma = i + soma;
    printf("%d \n", soma);
    i++;
}
printf("Resultado final é %d",soma);
return 0;
}


int ex3(){
    int num, i, soma = 1;
    printf("Diga um numero para um mutiplicação fatorial: ");
    scanf("%d", &num);

    for(i = 1; i<=num;i++){
        soma = i*soma;
        printf("X %d ",i);
    }
    printf(" = %d", soma);

    return 0;
}

int ex4(){
for(int i = 1; i <= 5; i++){
    for(int o = 0; o < i;o++){
        printf("o");
    }
    printf("\n");
}
return 0;
}

int ex5(){
int stu = 0;
float med = 0, nota = 0;
printf("How many students you have?: ");
scanf("%d",&stu);
for(int i=1; i <= stu; i++){
printf("O %d aluno teve: ", i);
scanf("%f", &nota);
printf("\n");
med = nota + med;
}
med = med / (float)stu;
printf("A média dos alunos é: %.2f", med);
}

int ex6(){
int nrlimit;
int n1 = 0, n2 = 1, res = 0;
printf("Forneça um nr limite: ");
scanf("%d", &nrlimit);
do{
printf("%d , %d , %d, ", n1 , n2, n1+n2);
res = n1+n2;
n1 = res + n2;
n2 = res + n1;
}while(res < nrlimit);
return 0;
}

int ex7(){
    int nr;
    printf("Give a number: ");
    scanf("%d",&nr);
    printf("A soma dos é: %d", soma_digitos(nr));
    return 0;
}
int soma_digitos(int a){
    int soma;
    while(a > 0){
            soma += a % 10;
            a /= 10;
        }
    return soma;
}

int ex1zz(){

printf("Exercicio 1: \n");

return 0;
}


