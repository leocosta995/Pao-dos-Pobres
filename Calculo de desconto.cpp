#include<stdio.h>
#include<stdlib.h>
main(){
	float preco,total,percentual, porcentagem;
	
	printf ("Digite o percentual de desconto: ");
	scanf ("%f", &porcentagem);
	
	printf ("Digite o preco: ");
	scanf ("%f", &preco);
	
	percentual= (porcentagem /100);
	total= preco - (preco * percentual);
	
	printf ("\n");
	printf ("Desconto %0.0f porcento:\n", porcentagem);
	printf ("preco com o desconto: %0.2f \n \n", total);
	
	system ("pause");
}
