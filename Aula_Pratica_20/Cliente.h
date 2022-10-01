//
// Created by Pedro on 06/01/2022.
//

#ifndef AULA_PRATICA_20_CLIENTE_H
#define AULA_PRATICA_20_CLIENTE_H

#include <string>
#include <utility>
#include "Apressado.h"

using namespace std;

class Ginasio;
class Cliente{

private:
    string nome;
    int bi;
    Tarifario *tarifarioCliente;
    Ginasio *ginasioUtilizado;

    int minutoInicioTreino;

public:
    Cliente(string novoNome, int novoBI): nome(std::move(novoNome)), bi(novoBI),
                                          minutoInicioTreino(-1), tarifarioCliente(new Apressado),
                                          ginasioUtilizado(nullptr){}

    Cliente(Cliente & outro){*this = outro;}
    Cliente & operator=(const Cliente & outro);

    void iniciaTreino(int minutoInicio);
    void terminaTreino(int minutoFim);

    int paga();

    virtual void reageEntrada() = 0;
    virtual void reageSaida() = 0;

};

#endif //AULA_PRATICA_20_CLIENTE_H
