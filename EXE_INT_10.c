#include <stdio.h>

int Etriangulo(int tri) {
	
	int cont=0,Etri=0;
	while(tri > Etri) {
		cont++;
		Etri = cont*(cont+1)*(cont+2);
		if(tri==Etri)
      		return 1;
  	}
  	
  	return 0;
}

int main(void) {
  	int triangulo;
  	
	printf("Digite um numero para saber se ele e um triangulo ou nao.\n");
  	scanf("%i",&triangulo);

  	if(Etriangulo(triangulo))
    	printf("E triangulo\n");
  	else
    	printf("Nao e triangulo\n");    
    	
  	return 0;
}
