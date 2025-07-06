#include <stdio.h>
#include <locale.h>

// estrutura para guardar as notas
struct Notas {
    int notaApol1;
    int notaApol2;
    int notaProva;
    int notaAtividade;
};

int main() {
    setlocale(LC_ALL, "Portuguese"); // serve paraaceitar os acentos da lingua portuguesa

    struct Notas notas; // struct para guardar as notas
    float media;

    // pedir as notas uma por uma entre 0 e 100

    do {
        printf("Digite a nota da APOL1 (0 a 100): ");
        scanf_s("%d", &notas.notaApol1);
    } while (notas.notaApol1 < 0 || notas.notaApol1 > 100);

    do {
        printf("Digite a nota da APOL2 (0 a 100): ");
        scanf_s("%d", &notas.notaApol2);
    } while (notas.notaApol2 < 0 || notas.notaApol2 > 100);

    do {
        printf("Digite a nota da Prova Objetiva (0 a 100): ");
        scanf_s("%d", &notas.notaProva );
    } while (notas.notaProva < 0 || notas.notaProva > 100);

    do {
        printf("Digite a nota da Atividade Prática (0 a 100): ");
        scanf_s("%d", &notas.notaAtividade);
    } while (notas.notaAtividade < 0 || notas.notaAtividade > 100);

    // calcula  a media
    media = notas.notaApol1 * 0.15 + notas.notaApol2 * 0.15 +
        notas.notaProva * 0.30 + notas.notaAtividade * 0.40;

    
    printf("Sua média final foi: %.2f\n", media); // Mostra a média


    // ve se o aluno passou, ficou de exame ou reprovou
    if ( media >= 70) {
        printf("FOI APROVADO!!\n");
    }
    else if (media >= 30) {
        printf(" FICOU EM EXAME!\n");
    }
    else {
        printf("FOI  REPROVADO.\n");
    }

    return 0;
}
