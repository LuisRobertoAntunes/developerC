#include <stdio.h>

int main (void){
	
	float notas[4];
	int i;
	
	//entrada de dados
	for(i = 0; i <= 3; i++){
	printf("Digite a nota do aluno: ");
	scanf("%f", &notas[i]);
	}
	
	//sa�da de dados
	for(i = 0; i <= 3; i++){
		printf("Valor da nota %d: %.1f \n",i,notas[i]);
	}
	
	return 0;
}
