#include "stdio.h"
#include "stdlib.h"

typedef struct{

  char titulo[50];
  char autor[50];

  int ano;
  float preco;

}Livro;

void ExibirLivro(Livro *livro){
  printf("O livro %s do autor %s foi publicado em %d e custa %.2f reais\n", livro->titulo, livro->autor, livro->ano, livro->preco);
}

void MaisBarato(){

}

int main(){

  /*Livro livros[2];

  for (int i=0; i<2;i++){
    puts("Digite o titulo do livro: ");
    fgets(livros[i].titulo,sizeof(livros[i].titulo),stdin);
    livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';

    puts("Digite o autor do livro: ");
    fgets(livros[i].autor,sizeof(livros[i].autor),stdin);
    livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';

    puts("Digite o ano do livro:");
    scanf("%d", &livros[i].ano);
    puts("Digite o preco do livro:");
    scanf("%f", &livros[i].preco);
    getchar();

  }

  for(int i=0;i<2;i++){
    ExibirLivro(&livros[i]);
  }
  */

  Livro *ls = malloc(5 * sizeof (Livro));

  if (ls == NULL) return 1;

  for(int i=0;i<5;i++){
    printf("%s %s %d %f\n", ls[i].titulo, ls[i].autor, ls[i].ano, ls[i].preco);
  }

  return 0;
}
