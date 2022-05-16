#include<stdio.h>
#include<stdlib.h>
main(){
	int funcionarios,cont= 0;
	float salario,vendas,comissao,salario_final,folha_de_pagamento;
	
	printf ("numero de funcionarios: ");
	scanf ("%d", &funcionarios);
	
	while (cont < funcionarios)
	{
		
		printf ("salario: ");
		scanf ("%f", &salario);
		
		printf ("valor de vendas: ");
		scanf ("%f", &vendas);
		
		comissao= (vendas * 0.04);
		salario_final= (salario + comissao);
		
		cont= (cont + 1);
		folha_de_pagamento= (folha_de_pagamento + salario_final);
		
		printf ("valor da comissao: %f \n", comissao);
		printf ("salario final do funcionario: %f \n",salario_final);
		printf ("folha de pagamento: %f \n \n", folha_de_pagamento);
	
	}
	

	
	system ("pause");
}

