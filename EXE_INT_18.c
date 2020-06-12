#include <stdio.h>

main() {
	int a, b, c;
	
	printf("Digite A: ");
	scanf("%i",&a);
	printf("Digite B: ");
	scanf("%i",&b);
	printf("Digite C: ");
	scanf("%i",&c);
	
	if( pow(a,2) == pow(b,2)+pow(c,2) || pow(b,2) == pow(a,2)+pow(c,2) || pow(c,2) == pow(b,2)+pow(a,2))
		printf("Triangulo retangulo");
	else
		printf("Nao e triangulo retangulo");
	return 0;
}
