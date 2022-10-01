//
// Created by pedro on 14/12/2021.
//

#include "peixe.h"
#include "aquario.h"
#include <sstream>

int Peixe::nSerieAtual = 500;

Peixe::Peixe(const string & nome, const string & cor):
    numeroSerie(nSerieAtual++), nomeEspecie(nome), cor(cor), peso(10), vezesAteMorrer(-1) {}

void Peixe::registaAquario(Aquario *a) {meuAquario = a;}

string Peixe::getNomeEspecie() const {return nomeEspecie;}
string Peixe::getCor() const {return cor;}
int Peixe::getNumeroSerie() const {return numeroSerie;}

double Peixe::getPeso() const {return peso;}
void Peixe::setPeso(double novoPeso) {peso=novoPeso;}

int Peixe::getVezesAteMorrer() const {return vezesAteMorrer;}
void Peixe::setVezesAteMorrer(int novoVezesAteMorrer) {vezesAteMorrer = novoVezesAteMorrer;}

void Peixe::alimentar(double quantidadeAlimento) {

    if(getVezesAteMorrer() > 0) {
        decrementarVezesAteMorrer();

    }else if(getVezesAteMorrer() == 0){
        meuAquario->mataPeixe(this);

    } else if(getVezesAteMorrer() == -1){

        if(getPeso()+quantidadeAlimento > 50)
        {
            if(nSerieAtual % 2 == 0)
            {
                setPeso(40);
                meuAquario->adicionaPeixe(new Peixe(getNomeEspecie(), getCor()));
            } else
            {
                setPeso(getPeso()/2);
                setVezesAteMorrer(4);
            }
        }
    }
}

void Peixe::decrementarVezesAteMorrer() {vezesAteMorrer -= 1;}

string Peixe::getDescricao() const {
    ostringstream oss;

    oss << "Numero de serie: " << getNumeroSerie() << endl;
    oss << "Especie: " << getNomeEspecie() << endl;
    oss << "Cor: " << getCor() << endl;
    oss << "Peso: " << getPeso() << endl;

    return oss.str();
}