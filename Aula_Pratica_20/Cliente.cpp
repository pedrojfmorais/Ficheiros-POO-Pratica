//
// Created by Pedro on 06/01/2022.
//

#include "Cliente.h"

void Cliente::iniciaTreino(int minutoInicio) {
    if(minutoInicioTreino == -1)
        minutoInicioTreino = minutoInicio;
}

void Cliente::terminaTreino(int minutoFim) {
    if(minutoInicioTreino != -1) {
        tarifarioCliente->acrescentaTreino(minutoFim - minutoInicioTreino);
        minutoInicioTreino = -1;
    }
}

int Cliente::paga() {
    return tarifarioCliente->calculaPagamento();
}

Cliente & Cliente::operator=(const Cliente &outro) {
    if(this == &outro)
        return *this;

    delete tarifarioCliente;

    nome = outro.nome;
    bi = outro.bi;
    minutoInicioTreino = outro.minutoInicioTreino;

    ginasioUtilizado = outro.ginasioUtilizado;

    tarifarioCliente = outro.tarifarioCliente->duplica();

    return *this;
}