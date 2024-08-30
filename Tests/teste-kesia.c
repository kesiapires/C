#include<stdio.h>

void minha_funcao(int x, int y, int z) {
	
	x = 31;
}

int main() {
	
	int a = 2;
	int b = 3;
	int c = 20;
	
	minha_funcao(a, b, c);
	printf("%d", a);
}