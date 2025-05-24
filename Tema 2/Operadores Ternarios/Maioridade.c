#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {
    int diaNasc, mesNasc, anoNasc;
    int idade, resultado;

    printf("ESTE PROGRAMA TEM POR FINALIDADE DEFINIR SE VOCE E OU NAO MAIOR DE IDADE.\n\n ");

    // Solicita a data de nascimento
    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &diaNasc);
    printf("Digite o mes do seu nascimento: ");
    scanf("%d", &mesNasc);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNasc);

    // Obtem a data atual
    time_t t = time(NULL);
    struct tm dataAtual = *localtime(&t);

    int diaAtual = dataAtual.tm_mday;
    int mesAtual = dataAtual.tm_mon + 1; // tm_mon vai de 0 a 11
    int anoAtual = dataAtual.tm_year + 1900;

    // Calcula a idade básica
    idade = anoAtual - anoNasc;

    // Ajusta se ainda não fez aniversário esse ano
    if (mesAtual < mesNasc || (mesAtual == mesNasc && diaAtual < diaNasc)) {
        idade--;
    }

    printf("Sua idade atual: %d anos\n\n", idade);

    // Calculo de Maioridade
    resultado = idade >= 18 ? 1 : 0;
    if (resultado == 1) {
        printf("VOCE E MAIOR DE IDADE\n");
    }
    else {
        printf("VOCE E MENOR DE IDADE\n");
    }

    return 0;
}
