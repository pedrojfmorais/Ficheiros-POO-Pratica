//
// Created by Pedro on 06/01/2022.
//

#include "Tarifario.h"

Tarifario::Tarifario(const Tarifario &outro): duracaoTreinos(nullptr), numTreinos(0) {*this = outro;}

Tarifario &Tarifario::operator=(const Tarifario &outro) {
    if(this == &outro)
        return *this;

    apagaTreinos();
    numTreinos = 0;

    if(outro.duracaoTreinos == nullptr)
        return *this;

    for(int i = 0; i < outro.numTreinos; ++i)
        acrescentaTreino(outro.duracaoTreinos[i]);

    return *this;
}

void Tarifario::apagaTreinos() {
    delete [] duracaoTreinos;
    duracaoTreinos = nullptr;

    numTreinos = 0;
}

void Tarifario::acrescentaTreino(int novo) {

    int *tempDuracaoTreinos = duracaoTreinos;

    ++numTreinos;

    duracaoTreinos = new int[numTreinos];

    for(int i = 0; i < numTreinos - 1; ++i)
        duracaoTreinos[i] = tempDuracaoTreinos[i];

    duracaoTreinos[numTreinos-1] = novo;

    delete [] tempDuracaoTreinos;
}

int *Tarifario::getDuracaoTreinos() const {return duracaoTreinos;}

int Tarifario::getNumTreino() const {return numTreinos;}