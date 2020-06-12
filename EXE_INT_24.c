#include <stdio.h>
#include <locale.h>

main() {
	int num[2],quant,i,q[50],iq,p[50],ip,sub,cont;
	
	quant=ip=iq=0;
	setlocale(LC_ALL,"");
	
	printf("Digite p: ");
	scanf("%i",&num[0]);
	printf("Digite q: ");
	scanf("%i",&num[1]);

	quant=0;
	
	while(num[0]) {	//23
		p[ip]=num[0]%10;
		num[0]/=10;
		ip++;
	}
	
	while(num[1]) {	//57238
		q[iq]=num[1]%10;
		num[1]/=10;
		iq++;
	}
	
	sub=0;
	for(cont=0;cont<iq;cont++) {
		
		for(i=0;i<ip;i++) {
			if(p[i]==q[cont]) {
				sub++;
				printf("q = %i\n",q[cont]);
				printf("p = %i\n",p[i]);
				printf("sub = %i\n",p[i]);
				if(sub==ip) {
					printf("p é subnúmero de q.\n");
					cont=iq;
				}
			}
		}
	}
	
	
	system("Pause");
}
