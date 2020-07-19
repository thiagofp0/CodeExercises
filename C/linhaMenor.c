#include <stdio.h>

//1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
//Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.

int main(){

	int n;

	scanf("%d", &n);
	int matriz[n][n];

	int maior = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j] > maior){
				maior = matriz[i][j];
			}
		}
	}

	int menor = maior;
	int numMenor = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{			
			if (matriz[i][j] < menor){
				menor = matriz[i][j];
				numMenor = i;
			}
		}
	}

	printf("%d", numMenor);

    return 0;
}