#include <stdio.h>

main() {
	int n, i, j, cont=1,num=0;
	
	printf("Digite a quantidade de numeros para aprarecer.\n");
	scanf("%i",&n);
	printf("Coloque os numeros que deseja ver seus multiplos.\n");
	scanf("%i",&i);
	scanf("%i",&j);
	
	printf("Os multiplos sao : ");
	while(cont<=n) {
		if(num % i == 0) {
			printf("%i ",num);
			cont++;
		}
		else
			if(num % j == 0) {
				printf("%i ",num);
				cont++;
			}
		num++;
	}
	
	printf("\n");
	
	system("Pause");
}
