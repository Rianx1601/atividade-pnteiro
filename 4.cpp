#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n, *vet;
	
	printf("Digite um n�mero de vezes que quer digitar: ");
	scanf("%d", &n);
	
	vet = (int*)malloc(n * sizeof(int));
	
	for(int i = 0; i < n; i++) {
		printf("Digite um n�mero inteiro - %d: ", i + 1);
		scanf("%d", &vet[i]);
	}
	
	printf("\nN�meros de forma inversa: \n");
	
	for(int i = n - 1; i >= 0; i--) {
		printf("%d ", *(vet+i));
	}
	
	free(vet);
	
	return 0;
}
