#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
char texto[500];
char copia[500];
char *pon = texto;
char *pon2 = copia;
printf("Digite seu texto: ");
fgets(texto, 500, stdin);

printf("O texto digitado foi: %s", texto);
printf("Texto sem vogais: ");
*pon=*pon2;

for (int i = 0; pon2[i] != '\0'; i++) {
if (pon2[i] == 'a' || pon2[i] == 'e' || pon2[i] == 'i' || pon2[i] == 'o' || pon2[i] == 'u' ||
        pon2[i] == 'A' || pon2[i] == 'E' || pon2[i] == 'I' || pon2[i] == 'O' || pon2[i] == 'U') {
} else {
printf("%c ", *(pon2 + i));
}
}
return 0;
}
