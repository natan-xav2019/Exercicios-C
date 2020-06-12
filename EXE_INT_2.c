#include <stdio.h>

int main() {
	int n,cont,soma=0;
	
	printf("Digite um numero para somarmos os 5 primeiros numeros:");
	scanf("%i",&n);
	
	for(cont=1;cont<=n;cont++) {
		soma+=cont;
	}
	
	printf("Os 5 primeiro numeros apartir %i da %i.\n",n,soma);
	
	system("pause");
}
