#include <stdio.h>
#include <stdlib.h>

int main (){
/*
    int num;
    do{
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num !=0)
            printf("numero = %d\n", num);

    }while (num!=0);


Desenvolva um programa que leia uma sequência de números,
 podendo terminar com o número 0 ou 9. Para cada número lido (diferente de 0 ou 9),
 mostre seu sucessor caso o número seja par, ou seu antecessor se o número for ímpar.


*/

    int num =1;
    do{
        if(num !=0){
            printf("Digite um numero: ");
            scanf("%d", &num);
            if (num %2 ==0)
                printf("%d\n",num+1);
            else
                printf("%d\n",num-1);
        }

    }while(num!=0);

    return 0;
}