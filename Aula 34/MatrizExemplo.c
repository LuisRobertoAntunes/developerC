#include <stdio.h>

int main (){
	
	int m[3][3] = {{10,20,99}, 
				   {30,40,77},
				   {60,87,43}};
	
	printf("Valor da linha 0, coluna 0 = %d \n",m[0][0]);
	printf("Valor da linha 0, coluna 1 = %d \n",m[0][1]);
	printf("Valor da linha 0, coluna 2 = %d \n\n",m[0][2]);
	
	printf("Valor da linha 1, coluna 0 = %d \n",m[1][0]);
	printf("Valor da linha 1, coluna 1 = %d \n",m[1][1]);
	printf("Valor da linha 1, coluna 2 = %d \n\n",m[1][2]);
	
	printf("Valor da linha 2, coluna 0 = %d \n",m[2][0]);
	printf("Valor da linha 2, coluna 1 = %d \n",m[2][1]);
	printf("Valor da linha 2, coluna 2 = %d \n",m[2][2]);
	
	return 0;
}
