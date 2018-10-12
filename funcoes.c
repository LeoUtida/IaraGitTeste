#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

float soma3nums(float a, float b, float c){
	float resultado = a + b + c;
	return resultado;
}

float mult3nums(float a, float b, float c){
	return (a * b * c);
}

float divTrata0(float a, float b){
	if(b == 0){
		printf("ERRO: Denominador igual a 0\n");
		return 0;
	}else{
		return (a/b);
	}
}

float mediaPesos(float num1, float peso1, float num2, float peso2, float num3, float peso3){
	if((peso1 + peso2 + peso3) == 0 || peso1 < 0 || peso2 <0 || peso3<0){
		printf("ERRO: Pesos com problema\n");		
		return 0;
	}else{
		return ((num1*peso1 + num2*peso2 + num3*peso3)/(peso1+peso2+peso3));
	}
}