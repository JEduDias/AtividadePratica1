#include <stdio.h>
#include <locale.h>
#include <string.h> // para strlen

int main() {
    setlocale(LC_ALL, "Portuguese"); // ativa acentua��o no console

    char texto[120]; // aqui vamos guardar o RU e o nome completo
    char* ponteiro;  // ponteiro que vai percorrer o texto depois

    // pedir para o usu�rio digitar o RU e o nome completo
    printf("Digite seu RU e nome completo: ");
    fgets(texto, sizeof(texto), stdin); // l� a linha inteira com espa�os

    return 0;
}
