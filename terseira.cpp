#include <stdio.h>
#include <locale.h>

void troca (int *fx, int *fy) {
	
	*fx = *fx + *fy;
	*fy = *fx - *fy;
	*fx = *fx - *fy;
}

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int x, y;
	
	printf("Digite o primeiro número(inteiro): ");
	scanf("%d", &x);
	printf("Digite o segundo número(inteiro): ");
	scanf("%d", &y);
	
	troca (&fx, &fy);
	int *fx=&x ,*fy=&y;
	printf("\nTrocando os Números:\n");
	printf("\nx = %d\ny = %d", x, y);
	
	return 0;
}
