#include "src/Usuario.h"
#include "src/Livro.h"
#include "stdio.h"
#include "string.h"

#define ARRAYSIZE(array) (sizeof(array)/sizeof(array[0]))
/*
typedef struct Node
{
    
}Node;
*/

int carregarLivros(Livro *lista, int qtdLivros, int limiteMaximo) {
    FILE *arq = fopen("livros.csv", "r");
    if (arq == NULL) {
        printf("Arquivo de livros nao encontrado. Criando novo ao salvar.\n");
        return 0; // Nenhum livro carregado ainda
    }

    char linha[256];
    qtdLivros = 0;

    // Read linha por linha até o fim do arquivo (EOF)
    while (fgets(linha, sizeof(linha), arq) != NULL && qtdLivros < limiteMaximo) {
        // Trata a quebra de linha se presente
        linha[strcspn(linha, "\n")] = '\0';

        // Extrai os campos separados por ';'
        // Formato: %d;%99[^;];%99[^;];%d
        int lidos = sscanf(linha, "%d;%99[^;];%99[^;];%d", 
                           &lista[qtdLivros].codigo, 
                           lista[qtdLivros].titulo, 
                           lista[qtdLivros].autor, 
                           &lista[qtdLivros].quantidade);

        if (lidos == 4) {
            (qtdLivros)++; // Incrementa a quantidade de livros lidos
        }
    }

    fclose(arq);
    return 1;
}

int main(){
    
    Livro *livros;
    Usuario *usuarios;

    carregarLivros(&livros,ARRAYSIZE(livros),256);

    return 0;
}