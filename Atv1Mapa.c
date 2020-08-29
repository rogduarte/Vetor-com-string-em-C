#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
    setlocale(LC_ALL,"");
    const char RA[9] = "19520905";
    int i, vet[9];

    for (i=0;i<9;i++){
        vet[i]=(RA[i]);
    }
    i=0;
    do{
        printf("\nVetor na posição %d recebe a string: %c que equivale ao número %d em ASCII",i,vet[i],vet[i]);
        i++;
    }while(i<8);
    printf("\n");
    system("pause");
return 0;
}
