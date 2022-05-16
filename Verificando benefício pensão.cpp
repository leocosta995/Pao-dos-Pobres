#include<stdio.h>
#include<stdlib.h>
main(){
	char sexo;
	int idade, estado_civil;
	float salario,pensao;
	
	printf ("Digite M para sexo masculino ou F para feminino: ");
	scanf ("%c", &sexo);
	
	printf ("Digite 1 para  casado e 2 para solteiro: ");
	scanf ("%d", &estado_civil);
	
	printf ("Informe sua idade: ");
	scanf ("%d", &idade);
	
	printf ("Informe o salario do seu pai ou conjuge: ");
	scanf ("%d", &salario);
	
	if (sexo == 'M')
	{
		if (estado_civil == '2' && idade < 18)
		{
			pensao= (salario * 0.15);
		}
		else
		{
			printf ("\n");
			printf ("estado civil: %d \n", estado_civil);
			printf ("idade: %d \n", idade);
			printf ("sem direito ao beneficio \n");
		}
	}
	else if (sexo == 'F')
	{
		if (estado_civil == '2' && idade < 21)
		{
			pensao= (salario * 0.20);
		}
		else if (estado_civil == '1' && idade < 21)
		{
			pensao= (salario * 0.30);
		}
		else
		{
		 	printf ("\n");
			printf ("estado civil: %d \n", estado_civil);
			printf ("idade: %d \n", idade);
			printf ("sem direito ao beneficio \n");
		}
	}
	
	system ("pause");
	
}
