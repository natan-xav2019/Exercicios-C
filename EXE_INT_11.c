#include <stdio.h>
#include <locale.h>

int main(void) {
  	int num,ate,cont,quatDivisor=0;
  	
  	setlocale(LC_ALL,"");

  	printf("Verifica se o numero e primo: ");
  	scanf("%i",&num);

	for(cont=1;cont<=num;cont++) {
		if(num % cont == 0)
			quatDivisor++;
	}
	if(quatDivisor == 2)
		printf("%i � Primo\n",num);
  	else
    	printf("%i n�o � Primo\n",num);
  
  	return 0;
}
