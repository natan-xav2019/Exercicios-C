#include <stdio.h>

main() {
	int n,per=0,cont=1;
	
	printf("Digite um numero para saber se ele e perfeito ou nao: ");
	scanf("%i",&n);
	
	while(per < n) {
		per += cont;
		cont++;
	}
	
	if(per==n)
		printf("%i e perfeito.\n",n);
	else
		printf("%i nao e perfeito.\n",n);
	
	system("Pause");
}
