//
// Created by pedro on 21/12/2021.
//

#ifndef AULA_PRATICA_18_BIBLIOTECA_H
#define AULA_PRATICA_18_BIBLIOTECA_H

#include <vector>
#include "livro.h"

using namespace std;

class Biblioteca{
private:
    vector <Livro *> livros;
public:
    void adicionaLivro(Livro & l);
    Livro * procuraLivro(const string& ISBN);
    void apagalivro(const string & ISBN);

    Biblioteca &operator=(const Biblioteca & outro);
    Biblioteca(Biblioteca & outro);
    ~Biblioteca();

    void apagaLivros();
};

#endif //AULA_PRATICA_18_BIBLIOTECA_H
