#include <stdio.h>
#define MES 30

int main() {
	int i,maior,dia,quantDisc[MES],total;
	
	total=0;
	
	for(i=0;i<MES;i++) {
		printf("venda do dia %i\nquantos discos foram vendido?\n",i+1);
		scanf("%i",&quantDisc[i]);
		
		total += quantDisc[i];
		if(i==0) 
			maior = quantDisc[i];
		else 
			if(maior < quantDisc[i]) {
				maior = quantDisc[i];
				dia = i+1;
			}
		system("cls");
	}
	
	printf("O dia que foi vendido mais discos foi\n");
	printf("Dia %i\n",dia);
	printf("quantidade de %i discos\n",quantDisc);
	
	return 0;
}
