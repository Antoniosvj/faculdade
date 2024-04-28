#include <stdio.h>
#include <stdlib.h>

int main (){
/*
um programa que leia uma sequência de números inteiros terminada em zero 
e mostre cada número lido (exceto o zero).
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while (num!=0){
        printf("O número lido foi = %d\n\n", num);
        printf("Digite um numero: ");
        scanf("%d", &num);
    }


    Desenvolva um programa que leia 3 notas de 40 alunos, calcule 
    e mostre a média aritmética e a situação de aprovação de cada aluno. 
    Lembre-se de que apenas a média igual ou acima de 7 aprova o aluno.
    int alunos = 1;
    float nota1, nota2, nota3, media;
    while (alunos <40){
        printf("Digite a nota1: ");
        scanf("%f",&nota1);
        printf("Digite a nota2: ");
        scanf("%f", &nota2);
        printf("Digite a nota3: ");
        scanf("%f", &nota3);

        media = (nota1+nota2+nota3)/3;
        if (media >=7)
            printf("Media: %.1f, aluno aprovado\n", media);
        else
            printf("Media: %.1f, aluno reprovado\n", media);
    alunos++;
    }
*/

    char letra;
    int conta, conte, conti, conto, contu;
    conta = conte = conti = conto = contu = 0;
    scanf("%c", &letra);
    while (letra!="."){
        switch (letra)
        {
            case 'a':
                conta++; break;
            case 'e':
                conte++; break;
            case 'i':
                conti++; break;
            case 'o':
                conto++; break;
            case 'u':
                contu++; break;
        }
        scanf("%c", &letra);
    }
    printf("Total de a: %d \n", conta);
    printf("Total de e: %d \n", conte);
    printf("Total de i: %d \n", conti);
    printf("Total de o: %d \n", conto);
    printf("Total de u: %d \n", contu);


    return 0;
}