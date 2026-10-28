#ifndef USUARIO_H
#define USUARIO_H
#include "Livro.h"

typedef struct Usuario{
    char *matricula;
    char *nome;
    char *curso;
    Livro livro;
}Usuario;

#endif //USUARIO