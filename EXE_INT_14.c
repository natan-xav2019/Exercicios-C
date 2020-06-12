#include <stdio.h>

main() {
	int f1,f2,fi,cont,n=6;
	
	f1=0;
	f2=1;
	
	printf("digite qual numero da sequencia de fibonate voce gostaria de saber?");
	scanf("%i",&n);
	
	for(cont=1;cont<=n;cont++) {
		fi = f1+f2;
		f1 = f2;
		f2 = fi;	   
	}
	
	printf("%i\n",fi);
	
	system("Pause");
}
