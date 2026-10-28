#include "string.h"
#include "Livro.h"

typedef struct {
  int codigo;
  int ano_pulbicacao;
  int quantidade;
  char *titulo;
  char *autor;
}Livro;