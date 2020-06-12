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
		printf("%i é Primo\n",num);
  	else
    	printf("%i não é Primo\n",num);
  
  	return 0;
}
