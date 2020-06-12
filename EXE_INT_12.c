#include <stdio.h>

int mdc (int n1, int n2) {
  	int res;
  
  	if(n1>n2)
  	{
    	while(1) {
    	res = n1 % n2;
    	if(res == 0)
      		return n2;
    	n1 = n2;
    	n2 = res;
    	}
  	}
  	else
    	while(1) {
    	res=n2 % n1;
    	if(res==0)
      		return n1;
    	n2 = n1;
    	n1 = res;
    	}
}

int main(void) {
   
  	int n1,n2;

  	printf("digite dois numeros:\n");
  	scanf("%d %d",&n1,&n2);

  	printf("O MDC de %d e %d e: %d.\n",n1,n2,mdc(n1,n2));
}
