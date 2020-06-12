#include <stdio.h>
#include <locale.h>
#include <math.h>

main () {
	int x,n;
	
	printf("digite o numero e a quantidade que deseja elevalo\n");
	scanf("%i",&x);
	do {
		scanf("%i",&n);
	}while( 0>n );
	
	printf("%i elevado a %i da %.0lf\n",x,n,pow(x,n));
	
	system("Pause");
}
