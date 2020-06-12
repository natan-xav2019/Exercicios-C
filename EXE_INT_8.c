#include <stdio.h>

int Fatorial(int n) {
	if(1>=n)
		return 1;
	else
		return Fatorial(n-1)*n;
}

main() {
	int n,fat;
	
	printf("Digite um numero para fatorial.\n");
	scanf("%i",&n);
	
	fat=Fatorial(n);
	
	printf("O valor de %d! = %d\n", n, fat);
	
	system("pause");
}
