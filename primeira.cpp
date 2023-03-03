#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int array[5];
	int *ponteiro = array;
	
	for (int i = 0; i < 5; i++) {
		printf("Digite um número: ");
		scanf("%d", &array[i]);
	}
	
	for (int i = 0; i < 5; i++) {
		printf("\nNúmero informado: %d\n", *(ponteiro + i));
		printf("Endereço dos números: %p\n", ponteiro + i);
	}
	
	return 0;
}
