//
// Created by pedro on 21/12/2021.
//

#include "biblioteca.h"

#include <vector>

void Biblioteca::adicionaLivro(Livro &l) {
    if(procuraLivro(l.getISBN()) != nullptr)
        return;

    livros.push_back(l.duplica());
}

Livro *Biblioteca::procuraLivro(const string& ISBN) {
    for(auto livro : livros)
        if(livro->getISBN() == ISBN)
            return livro;

    return nullptr;
}

Biblioteca & Biblioteca::operator=(const Biblioteca & outro)
{
    if(this == &outro)
        return *this;

    apagaLivros();

    for(auto livro : outro.livros)
        adicionaLivro(*livro);

    return *this;
}

Biblioteca::Biblioteca(Biblioteca &outro) {
    *this = outro;
}

Biblioteca::~Biblioteca() {
    apagaLivros();
}

void Biblioteca::apagaLivros(){
    for(auto livro : livros)
        delete livro;
    livros.clear();
}

void Biblioteca::apagalivro(const string &ISBN) {
    auto it = livros.begin();

    while(it != livros.end())
    {
        if((*it)->getISBN() == ISBN) {
            delete *it;
            livros.erase(it);
            return;
        }
        ++it;
    }
}