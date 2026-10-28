#ifndef LIVRO_H
#define LIVRO_H


typedef struct {
  int codigo;
  int ano_pulbicacao;
  int quantidade;

  char *titulo;
  char *autor;
}Livro;

void AddLivro(){};

void RmLivro(){};

#endif //LIVRO
