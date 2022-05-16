#include<stdio.h>
#include<stdlib.h>
main(){
	int salario_minimo,salario,quantidade;
	int cont=1;
	
	printf("Informe o salario minimo atual: ");
	scanf ("%d", &salario_minimo);
	
	while(cont <= 20)
	{
		cont= (cont + 1);
	
		printf ("Informe seu salario: ");
		scanf ("%d", &salario);
		
		quantidade= (salario / salario_minimo);
		
		printf ("Voce recebe %d salario(os) minimo(os) \n \n", quantidade);
	}
	
	system ("pause");
}
