#include <stdio.h>
#include <stdlib.h>\
#include "fixe.c"

int main() {
    printf("Hello, World! \n");
    struct fix gay = {20,"Fixe", 3000.0};
    printf("%s \n", gay.nome);
    return 0;
}