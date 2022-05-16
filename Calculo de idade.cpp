#include<stdio.h>
#include<stdlib.h>
int main() {
	int nascimento, atual, calculo_idade, calculo_ano, ano_calculo;
	int cont = 1;

	while (cont <= 5)
	{
		cont++;
		printf("Informe o ano do seu nascimento: ");
		scanf("%d", &nascimento);

		printf("Informe ano atual: ");
		scanf("%d", &atual);

		printf("Informe o ano para calcular a idade: ");
		scanf("%d", &ano_calculo);


		calculo_idade = (atual - nascimento);
		calculo_ano = (ano_calculo - nascimento);

		printf("Sua idade atual: %d \n", calculo_idade);
		printf("Sua idade em %d", ano_calculo);
		printf(" sera: %d \n \n", calculo_ano);
		
	}
	system("pause");
}