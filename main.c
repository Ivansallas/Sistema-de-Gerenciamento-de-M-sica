#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    if (!setlocale(LC_ALL, "pt_BR.UTF-8")) // ou "pt_PT.UTF-8"
    {
        setlocale(LC_ALL, "Portuguese_Brazil"); // Fallback para Windows
    }

    int opcao;

    printf("___________________MENU_____________________\n");
    printf("| [1] Cadastrar músicas                    |\n");
    printf("| [2] Listar músicas                       |\n");
    printf("| [3] Buscar música por título ou artista |\n");
    printf("| [4] Editar informações de uma música   |\n");
    printf("| [5] Remover uma música do sistema        |\n");
    printf("| [6] Salvar e carregar dados de um arquivo |\n");
    printf("|___________________________________________|\n");

    printf("\nDigite a opção desejada: ");
    if (scanf("%d", &opcao) != 1)
    {
        printf("Entrada inválida. Por favor, insira um número.\n");
        return 1; // Encerrar com erro
    }

    printf("Você escolheu a opção: %d\n", opcao);

    // Aqui você pode usar um switch para tratar as opções futuramente

    return 0;
}
