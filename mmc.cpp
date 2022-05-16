#include<stdio.h>
#include<stdlib.h>
main(){
	int numero;
	
	printf ("Digite o numero: ");
	scanf ("%d", &numero);
	
	if (numero < 0 )
	{
		printf ("Digite um outro numero: ");
		scanf ("%d", &numero);
	}else{
		for(int i = numero;i!=0;i--){
        if(numero%i == 0)
        printf("%d\n",i);
		}
	}
}
