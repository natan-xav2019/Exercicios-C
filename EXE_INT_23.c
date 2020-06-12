#include <stdio.h>
#include <string.h>

main() {
	int num1,num2,quant=0,i,igual=0;
	
	printf("Digite para saber se o numero e palindromo ou nao.\n");
	scanf("%i",&num1);
	
	num2=num1;
	
	while(num2) {
		num2/=10;
		quant++;	
	}
	
	int n[quant];
	
	num2=num1;
	quant=0;
	
	while(num2) {	
		n[quant]=num2%10;
		num2/=10;
		
		quant++;	
	}
	
	for(i=0;i<quant;i++) {
		if(n[i]==n[quant-i-1]) {
			igual++;
			if(igual == (quant/2)-1) {
				printf("O numero e palindromo %i.\n",num1);
			}
		}
		else {
			printf("Nao e palindromo\n");
			i=quant;
		}
	}
	
	
	system("Pause");
}
