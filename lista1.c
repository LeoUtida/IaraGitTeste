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
	float result = mult3nums(4.0, 2.0, 3.0);
	printf("Resultado = %f\n", result);
}