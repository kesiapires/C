#include<stdio.h>

void minha_funcao(/*esse * é para informar que esse parametro que recebe um inteiro vai pegar o endereço */int* x, int y, int z) {
	
	*x = 31;
	/*esse * é para acessar o conteúdo*/
}

int main() {
	
	int a = 2;
	int b = 3;
	int c = 20;
	
	minha_funcao(&a, b, c);
	printf("%d", a);
	/*esse & é para a função pegar o endereço*/
}