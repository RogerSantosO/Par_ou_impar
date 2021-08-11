#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int ini, par, imp, fin, subs; /*Variáveis globais que estarão disponíveis para a função main() e a função a ser criada iorp()*/
/*ini= número inicial
par= indicador de números pares
imp= indicador de números ímpares
fin= número final
subs= substituição (foi usado para evitar erro no programa)*/
void iorp();
int main(){
	setlocale(LC_ALL,"Portuguese");

	printf("\t==============================================================================\n\n");	
	printf("\tOlá!Este programa fará uma verificação do número inicial até o número final.\n");
	printf("\tSerá verificado se os números são pares ou ímpares.\n");
	printf("\tAo final será exibida a quantidade total de números pares encontrados.\n\n");
	printf("\t==============================================================================\n\n");
	printf("\tInsira o número inicial: ");
	scanf("%d",&ini);

	printf("\n\tInsira o número final: ");
	scanf("%d",&fin);
	printf("\t________________________________\n\n");

	if(ini>fin){ /*Caso o número inicial seja maior que o número final o programa não funcionará.Então esta condicional foi criada*/
		subs=ini; /*A variável subs servirá de suporte para a movimentação dos valores,para que no fim o valor inicial seja menor que o número final*/
		ini=fin;
		fin=subs;
	}
for(ini;ini<=fin;ini++){ /*Com o número inicial sendo menor que o número final, será possível chegar no resultado desejado da função for()*/
	iorp(); /*Dentro da estrutura de repetição há uma função que verifica se o número que está sendo alimentado é um número par ou ímpar.*/
}
printf("\t________________________________\n");

printf("\n\tA quantidade de números pares é: %d\n\n\n",par);

system("pause");
return 0;

}


void iorp(){ /*Função criada para checar números pares e ímpares.Todo número par divido por 2 possui resto 0 na divisão*/
	/*Os números ímpares dividos por 2 possuem resto 1*/
	if(0 == ini % 2){
		printf("\t<> O número %d é par\n",ini);
		par++; /*A cada vez que um número par é encontrado,sua variável é incrementada para em seguida ser declarado o total de números pares*/
		}
	else{
		printf("\t<> O número %d é ímpar\n",ini);
	}
}
