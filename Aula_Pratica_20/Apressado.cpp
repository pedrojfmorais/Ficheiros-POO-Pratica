//
// Created by Pedro on 06/01/2022.
//

#include "Apressado.h"

int Apressado::calculaPagamento() {

    int precoTreinos = 0;
    int duracaoTreino;

    for (int i = 0; i < getNumTreino(); ++i) {

        duracaoTreino = getDuracaoTreinos()[i];

        if(duracaoTreino <= 0)
            continue;
        else if(duracaoTreino <= 10)
            precoTreinos += 10;
        else if(duracaoTreino <= 20)
            precoTreinos += 15;
        else
            precoTreinos += 25;

    apagaTreinos();

    return precoTreinos;
}

Tarifario *Apressado::duplica() {return new Apressado(*this);}