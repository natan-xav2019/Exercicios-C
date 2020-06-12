#include <stdio.h>

main() {
	int n[3];
	
	printf("Digite 3 numeros para colocar em ordem crecente\n");
	scanf("%i",&n[0]);
	scanf("%i",&n[1]);
	scanf("%i",&n[2]);
	
	printf("Ordem cresente: ");
	if(n[0] < n[1] && n[1] < n[2])
		printf("%i %i %i\n",n[0],n[1],n[2]);
		
	else if(n[0] < n[2] && n[2] < n[1])
		printf("%i %i %i\n",n[0],n[2],n[1]);
		
	else if(n[1] < n[2] && n[2] < n[0])
		printf("%i %i %i\n",n[1],n[2],n[0]);
		
	else if(n[1] < n[0] && n[0] < n[2])
		printf("%i %i %i\n",n[1],n[0],n[2]);
		
	else if(n[2] < n[1] && n[1] < n[0])
		printf("%i %i %i\n",n[2],n[1],n[0]);
		
	else if(n[2] < n[0] && n[0] < n[1])
		printf("%i %i %i\n",n[2],n[0],n[1]);
		
	system("Pause");
}
