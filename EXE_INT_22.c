#include <stdio.h>

main() {
	int quant,n,nvec,cres=0;
	
	printf("A quantidade de valores que deseja ler\n");
	scanf("%i",&quant);
	
	printf("Digite um numero saiba a quantidade maior cresente.\n");
	while(quant>0) {
		
		scanf("%i",&n);
		
		if(n >= nvec)
			cres++;
		else
			cres=1;
			
		nvec=n;
		quant--;
	}
	
	printf("A seguinte  é formada por %i segmentos cresente.\n",cres);
	
	system("Pause");
}
