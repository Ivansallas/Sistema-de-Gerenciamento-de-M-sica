#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    printf("|-------------------------------------------|\n");
    printf("|__________________MENU_____________________|\n");
    printf("| Bem-vindo ao sistema de gerenciamento de  |\n");
    printf("| m�sicas!                                  |\n");
    printf("| seleciona uma op��o:                      |\n");
    printf("| [1] Cadastrar m�sicas                     |\n");
    printf("| [2] Listar m�sicas                        |\n");
    printf("| [3] Buscar m�sica por t�tulo ou artista   |\n");
    printf("| [4] Editar informa��es de uma m�sica      |\n");
    printf("| [5] Remover uma m�sica do sistema         |\n");
    printf("| [6] Salvar e carregar dados de um arquivo |\n");
    printf("|___________________________________________|");

    printf("\nDigite a op��o desejada: ");
    if (scanf("%d", &opcao) != 1)
    {
        printf("Entrada inv�lida. Por favor, insira um n�mero.\n");
        return 1; // Encerrar com erro
    }

    printf("Voc� escolheu a op��o: %d\n", opcao);

    // Aqui voc� pode usar um switch para tratar as op��es futuramente

    return 0;
}
