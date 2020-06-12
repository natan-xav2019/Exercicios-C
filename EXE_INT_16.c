#include <stdio.h>
#include <math.h>

main() {
	int num2, num10, n[30], i,max;
	
	num10=0;
	
	scanf("%i",&num2);
	
	max=exp=log10(num2);
	
	for(i=0; i<=max ; i++) {
		num10 += (num2%2)*pow(2,i);
		num2/=10;
	}
	
	printf("O conversor numero na base 10 e %i.\n",num10);	
	
	system("Pause");
}
