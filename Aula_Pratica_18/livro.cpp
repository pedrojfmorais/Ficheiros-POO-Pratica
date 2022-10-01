//
// Created by pedro on 21/12/2021.
//

#include "livro.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool operator==(Livro & a, Livro & b) {
    return a.getISBN() == b.getISBN();
}

ostream &operator<<(ostream &os, const Livro & livro){
    os << livro.getDescricao();
    return os;
}

int Livro::contadorISBN = 1;

Livro::Livro(string novoTitulo, string novoAutor):
    titulo(novoTitulo), autor(novoAutor), ISBN(to_string(contadorISBN++)) {}

Livro *Livro::duplica() {return new Livro(*this);}

string Livro::getISBN() const {return ISBN;}
string Livro::getTitulo() const {return titulo;}
string Livro::getAutor() const {return autor;}

string Livro::getDescricao() const {
    ostringstream oss;
    oss << endl << "ISBN: " << getISBN() << endl;
    oss << "Titulo: " << getTitulo() << endl;
    oss << "Autor: " << getAutor() << endl;

    return oss.str();
}

LivroPolicial::LivroPolicial(string novoTitulo, string novoAutor, string novoNome, int novoNumero):
    nomeDetetive(novoNome), numeroTirosDisparadosNaHistoria(novoNumero), Livro(novoTitulo, novoAutor){}

Livro *LivroPolicial::duplica() {return new LivroPolicial(*this);}

string LivroPolicial::getNomeDetetive() const {return nomeDetetive;}
int LivroPolicial::getNumeroTirosDisparadosNaHistoria() const {return numeroTirosDisparadosNaHistoria;}

string LivroPolicial::getDescricao() const {
    ostringstream oss;
    oss << Livro::getDescricao() << "Nome detetive: " << getNomeDetetive() << endl;
    oss << ((getNumeroTirosDisparadosNaHistoria() <= 10)? "Numero de tiros na historia: " +
            to_string(getNumeroTirosDisparadosNaHistoria())  : "Nao aconselhado a criancas") << endl;

    return oss.str();
}

FiccaoCientifica::FiccaoCientifica(string novoTitulo, string novoAutor, string novoNome, int novoAno, bool novoRealista):
    Livro(novoTitulo, novoAutor), nomePlaneta(novoNome), ano(novoAno), realista(novoRealista){}

Livro *FiccaoCientifica::duplica() {return new FiccaoCientifica(*this);}

string FiccaoCientifica::getNomePlaneta() const {return nomePlaneta;}
int FiccaoCientifica::getAno() const {return ano;}
bool FiccaoCientifica::getRealista() const {return realista;}

string FiccaoCientifica::getDescricao() const {
    ostringstream oss;
    oss << Livro::getDescricao();
    oss << "Planeta: " << getNomePlaneta() << endl;
    oss << "Ano: " << getAno() << endl;
    oss << "Realista: " << ((getRealista())? "Sim" : "Nao") << endl;

    return oss.str();
}