#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int array[5];
	int *ponteiro = array;
	
	for (int i = 0; i < 5; i++) {
		printf("Digite um n�mero: ");
		scanf("%d", &array[i]);
	}
	
	for (int i = 0; i < 5; i++) {
		printf("\nN�mero informado: %d\n", *(ponteiro + i));
		printf("Endere�o dos n�meros: %p\n", ponteiro + i);
	}
	
	return 0;
}
