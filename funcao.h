// Função para cadastrar produtos
int cadastro (char nomeProdutos[10][50], int quantidade, float preco){
    for (int p = 0; p < 10; p++){
        printf("Digite o nome do produto %d: ", p + 1);
        scanf("%s", nomeProdutos[p]);
        printf("Digite a quantidade do produto %d: ");
        scanf("%d", &quantidade);
        printf("Digite o preço do produto %d: ");
        scanf("%f", &preco);
    }
    return 0;
}