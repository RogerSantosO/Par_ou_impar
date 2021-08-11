#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int ini, par, imp, fin, subs; /*Vari�veis globais que estar�o dispon�veis para a fun��o main() e a fun��o a ser criada iorp()*/
/*ini= n�mero inicial
par= indicador de n�meros pares
imp= indicador de n�meros �mpares
fin= n�mero final
subs= substitui��o (foi usado para evitar erro no programa)*/
void iorp();
int main(){
	setlocale(LC_ALL,"Portuguese");

	printf("\t==============================================================================\n\n");	
	printf("\tOl�!Este programa far� uma verifica��o do n�mero inicial at� o n�mero final.\n");
	printf("\tSer� verificado se os n�meros s�o pares ou �mpares.\n");
	printf("\tAo final ser� exibida a quantidade total de n�meros pares encontrados.\n\n");
	printf("\t==============================================================================\n\n");
	printf("\tInsira o n�mero inicial: ");
	scanf("%d",&ini);

	printf("\n\tInsira o n�mero final: ");
	scanf("%d",&fin);
	printf("\t________________________________\n\n");

	if(ini>fin){ /*Caso o n�mero inicial seja maior que o n�mero final o programa n�o funcionar�.Ent�o esta condicional foi criada*/
		subs=ini; /*A vari�vel subs servir� de suporte para a movimenta��o dos valores,para que no fim o valor inicial seja menor que o n�mero final*/
		ini=fin;
		fin=subs;
	}
for(ini;ini<=fin;ini++){ /*Com o n�mero inicial sendo menor que o n�mero final, ser� poss�vel chegar no resultado desejado da fun��o for()*/
	iorp(); /*Dentro da estrutura de repeti��o h� uma fun��o que verifica se o n�mero que est� sendo alimentado � um n�mero par ou �mpar.*/
}
printf("\t________________________________\n");

printf("\n\tA quantidade de n�meros pares �: %d\n\n\n",par);

system("pause");
return 0;

}


void iorp(){ /*Fun��o criada para checar n�meros pares e �mpares.Todo n�mero par divido por 2 possui resto 0 na divis�o*/
	/*Os n�meros �mpares dividos por 2 possuem resto 1*/
	if(0 == ini % 2){
		printf("\t<> O n�mero %d � par\n",ini);
		par++; /*A cada vez que um n�mero par � encontrado,sua vari�vel � incrementada para em seguida ser declarado o total de n�meros pares*/
		}
	else{
		printf("\t<> O n�mero %d � �mpar\n",ini);
	}
}
