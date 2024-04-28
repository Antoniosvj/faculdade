#include <stdio.h>

int main(){
    /*
    int alunos;
    float nota1, nota2, nota3, media;
    printf("Qual a quantidade de alunos: ");
    scanf("%d", &alunos);

    for (int aluno = 1; aluno <= alunos; aluno++){
        printf("Nota 1 = ");
        scanf("%f", &nota1);
        printf("Nota 2 = ");
        scanf("%f", &nota2);
        printf("Nota 3 = ");
        scanf("%f", &nota3);

        media = (nota1+nota2+nota3)/3;
        printf("Aluno número %d, ", aluno);
        printf("media = %.1f", media);
        if (media >=7)
            printf(", Aluno aprovado\n");
        else
            printf(", Aluno reprovado\n");                
    }

   for (int cont=1000; cont>=100; cont=cont-100){
    printf("%d\n", cont);
   }
    

   //Desenvolva um programa que leia um número e o mostre 20 vezes.

    int numero; 
    printf("Digite um numero: ");
    scanf("%d",&numero);
    for (int cont = 0 ; cont <20; cont++){
        printf("%d\n",numero);
    }


Desenvolva um programa que leia 15 números inteiros e positivos 
e mostre o maior deles.

Lógica: precisamos de 3 variáveis do tipo inteiro (int) 
para armazenar cada número a ser lido, o maior dos números 
e controlar a repetição.

Inicializar a variável maior com zero.
Repetir 20 vezes (comando de repetição PARA):
Ler o número (comando de entrada de dados).
Se o número for superior à variável maior, ela recebe o conteúdo do número lido.
Exibir o conteúdo da variável maior (comando de exibição de dados).
    
    int numero, maior_numero;
    maior_numero = 0;
    for (int cont = 0; cont < 15; cont++){
        printf("Digite uma numero: ");
        scanf("%d", &numero);
        if (numero > maior_numero)
            maior_numero = numero;
    }
    printf("O maior numero digitado foi %d", maior_numero);


Desenvolva um programa que leia o salário de 10 funcionários de uma empresa,
 calcule e mostre o maior salário e a média salarial da empresa.
    float salario, maior, media, soma = 0;

    for (int cont =1; cont <= 10; cont++){
        printf("Digite o salario do funcionario %d: ", cont);
        scanf("%f", &salario);
        soma += salario;
        media = soma/10;
        if (salario > maior)
            maior = salario;
    }
    printf("O maior salario da empresa e %.2f e a medio salarial e %.2f", maior, media);


Desenvolva um programa que leia um número N e, em seguida, uma lista de N números inteiros. 
Esse programa também deve calcular e mostrar a soma dos números pares e dos números ímpares da lista.


    */

    int qtdnumero, par, impar, numeros;
    par = impar = 0;

    printf("Digite a quantidade de numeros ira usar: ");
    scanf("%d", &qtdnumero);
    for (int cont=1; cont <= qtdnumero; cont++){
        printf("Digite um número: ");
        scanf("%d", &numeros);
        if (numeros %2 ==0)
            par +=numeros;
        else
            impar += numeros;
    }
    printf("A soma dos numeros pares = %d\nA soma dos numeros impares = %d", par, impar);

    return 0;
}