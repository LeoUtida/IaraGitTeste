//bibliotecas padrão
//Quando queremos incluir uma biblioteca padrão da linguagem C
// normalmente devemos usar o comando #include e colocar o nome da biblioteca
// entre <>
#include <stdio.h>
#include <stdlib.h>

//Quando criamos nosso próprio header também utilizamos o #include para
// adiciona-lo ao código, porém o mesmo deve esta com o nome entre aspas
#include "funcoes.h"

int main(int argc, char *argv[]){

	float a,b,c;
	float peso1,peso2,peso3;

	printf("#########################\n");
	printf("Exercicio1: Soma\n");
	printf("Digite o valor do primeiro elemento: ");
	scanf("%f", &a);
	printf("Digite o valor do segundo elemento: ");
	scanf("%f", &b);
	printf("Digite o valor do terceiro elemento: ");
	scanf("%f", &c);

	printf("Resultado = %f\n\n", soma3nums(a,b,c));

	printf("#########################\n");
	printf("Exercicio1: Multiplicacao\n");
	printf("Digite o valor do primeiro elemento: ");
	scanf("%f", &a);
	printf("Digite o valor do segundo elemento: ");
	scanf("%f", &b);
	printf("Digite o valor do terceiro elemento: ");
	scanf("%f", &c);

	printf("Resultado = %f\n\n", mult3nums(a,b,c));

	printf("#########################\n");
	printf("Exercicio1: Divisao tratando 0\n");
	printf("Digite o valor do numerador: ");
	scanf("%f", &a);
	printf("Digite o valor do denominador: ");
	scanf("%f", &b);

	printf("Resultado = %f\n\n", divTrata0(a,b));

	printf("#########################\n");
	printf("Exercicio1: Media com pesos\n");
	printf("Digite o valor do primeiro elemento: ");
	scanf("%f", &a);
	printf("Digite o valor do segundo elemento: ");
	scanf("%f", &b);
	printf("Digite o valor do terceiro elemento: ");
	scanf("%f", &c);
	printf("Digite o valor do primeiro peso: ");
	scanf("%f", &peso1);
	printf("Digite o valor do segundo peso: ");
	scanf("%f", &peso2);
	printf("Digite o valor do terceiro peso: ");
	scanf("%f", &peso3);

	printf("Resultado = %f\n\n", mediaPesos(a,peso1,b,peso2,c,peso3));


}