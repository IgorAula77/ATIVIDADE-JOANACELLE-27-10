#include <stdio.h>
#include "funcao.h"


//Cadastro de produtos
int opcao;
char nomesProdutos[10][50];
float precos;
int quantidade;


// Consultar estoque
int codigos[10] = {1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010};




int main() {
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);
    printf("1. Cadastrar produtos.\n");
    printf("2. Consultar estoque.\n");
    printf("3. Registrar venda.\n");
    printf("4. Consultar produtos que precisam de reposição.\n");
    printf("5.Registrar entrada de mercadorias.\n");
    printf("6. Encerrar o programa. \n");


    switch (opcao) {
        case 1:
            if(opcao == 1){
                cadastro(nomesProdutos, quantidade, precos);
            }
           
            break;
        case 2:
           


            break;
        case 3:
           


            break;
        case 4:
           


            break;
        case 5:
           


            break;
        case 6:
           
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }
   

    return 0;
}