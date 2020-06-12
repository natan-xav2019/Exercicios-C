#include <stdio.h>

main() {
	int j,cont=0,m,n,i=1;
	printf("quantidade de numeros apresentadas: ");
	scanf("%i",&n);
	printf("numeros: ");
	scanf("%i",&j);
	printf("Divisor: ");	
	scanf("%i",&m);
	
	printf("sao congluentes: ");
	while(cont<=n) {
		if(i % m == j % m) {
			cont++;
			if(cont==n)
				printf("%i\n",i);
			else
				printf("%i ",i);
		}
		i++;
	}
	
	system("Pause");
}
