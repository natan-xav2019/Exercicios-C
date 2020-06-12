#include <stdio.h>
#include <math.h>

main() {
	int num2, num10, n[30], i=0,max;
	
	num2=0;
	
	scanf("%i",&num10);
	
	while(num10 != 0) {
		n[i] = num10%2;
		num10 /= 2;
		i++;
	}
	
	printf("O numero na base 2: ");
	
	for(i--;i>=0;i--) {
		if(i==0)
			printf("%i\n",n[i]);
		else
			printf("%i",n[i]);
	}
	
	system("Pause");
}
