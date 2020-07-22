#include <stdio.h>

int main(){

	int n;

	scanf("%d", &n);
	int ponteiro = 0;


	if(n%2 != 0){


		for(int j = ponteiro; j < (n - ponteiro); j++){

			for(int i=0; i<n; i++){
				printf("%d", i+1);
				ponteiro++;
			}
			printf("\n");
		}

	}
	return 0;
}

//Incompleto.
