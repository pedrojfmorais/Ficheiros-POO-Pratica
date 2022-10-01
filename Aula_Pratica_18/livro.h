//
// Created by pedro on 21/12/2021.
//

#ifndef AULA_PRATICA_18_LIVRO_H
#define AULA_PRATICA_18_LIVRO_H

#include <string>

using namespace std;

class Livro{
private:
    string titulo;
    string autor;
    string ISBN;
    static int contadorISBN;

public:
    Livro(string novoTitulo, string novoAutor);

    virtual Livro * duplica();

    string getISBN() const;
    string getTitulo() const;
    string getAutor() const;

    virtual string getDescricao() const;
    friend ostream &operator<<(ostream &os, const Livro & livro);
};

class LivroPolicial:public Livro{
private:
    string nomeDetetive;
    int numeroTirosDisparadosNaHistoria;

public:
    LivroPolicial(string novoTitulo, string novoAutor, string novoNome, int novoNumero);

    Livro * duplica();

    string getNomeDetetive() const;
    int getNumeroTirosDisparadosNaHistoria() const;
    string getDescricao() const;
};

class FiccaoCientifica : public Livro{
private:
    string nomePlaneta;
    int ano;
    bool realista;

public:

    FiccaoCientifica(string novoTitulo, string novoAutor, string novoNome, int novoAno, bool novoRealista);

    Livro * duplica();

    string getNomePlaneta() const;
    int getAno() const;
    bool getRealista() const;
    string getDescricao() const;
};

#endif //AULA_PRATICA_18_LIVRO_H
