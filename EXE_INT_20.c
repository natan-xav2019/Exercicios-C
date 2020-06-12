#include <stdio.h>
#include <math.h>

main (){
	int num,n1,n2,raiz;
	
	printf("Digite um numero: ");
	scanf("%i",&num);
	
	n1= num/100;
	n2= num%100;
	raiz=sqrt(num);
	
	if(n1+n2==raiz)
		printf("raiz de %i = %i = %i + %i.\n",num,raiz,n1, n2);
	
	system("pause");
}
