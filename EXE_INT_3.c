#include <stdio.h>
#include <locale.h>

int main() {
	int n,cont,x;
	
	setlocale(LC_ALL,"");
	
	printf("digite um numero: ");
	scanf("%i",&n);
	
	printf("Os primeiros %i numeros impares são.\n",n);
	for(cont=1,x=1;cont<=n;cont++) {
		printf("%i\n",x);
		x+=2;
	}
	
	system("pause");
}
