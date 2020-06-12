#include <stdio.h>
#include <locale.h>

main() {
	int num,cont;
	
	setlocale(LC_ALL,"");
	
	printf("Digite o numero para saber ate onde os numeros pares vão.\n");
	scanf("%i",&num);
	
	printf("Numeros pares\n");
	for(cont=1;cont<=num;cont++) {
		printf("%i\n",cont*2);
	}
	
	system("pause");
}
