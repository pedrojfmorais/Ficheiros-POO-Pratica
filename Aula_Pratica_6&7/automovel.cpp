//
// Created by pedro on 26/10/2021.
//

#include "automovel.h"

#include <iostream>

using namespace std;

Automovel::Automovel(Automovel &outro):
    matricula(outro.matricula), marca(outro.marca), modelo(outro.modelo), cavalos(outro.cavalos),
    combustivel(outro.combustivel), capacidadeCombustivel(outro.capacidadeCombustivel),
    velocidade(outro.velocidade), velocidadeMaxima(outro.velocidade)
    {};

Automovel::Automovel(string novaMatricula, string novaMarca, string novoModelo, int novosCavalos,
                     int novaCapacidadeCombustivel, int novaVelocidadeMaxima):
    matricula(novaMatricula), marca(novaMarca), modelo(novoModelo), cavalos(novosCavalos),
    combustivel(0), capacidadeCombustivel(novaCapacidadeCombustivel),
    velocidade(0), velocidadeMaxima(novaVelocidadeMaxima < 0 ? 120: novaVelocidadeMaxima)
    {};

string Automovel::obtemMatricula() const {return matricula;}
string Automovel::obtemMarca() const {return marca;}
string Automovel::obtemModelo() const {return modelo;}
int Automovel::obtemCavalos() const {return cavalos;}
float Automovel::obtemQuantidadeCombustivel() const {return combustivel;}
int Automovel::obtemVelocidade() const {return velocidade;}

void Automovel::acelera(int forca){
    velocidade+=forca;
    if( velocidade > velocidadeMaxima)
        velocidade = velocidadeMaxima;
}

void Automovel::trava(int forca){
    velocidade-=forca;
    if(velocidade < 0)
        velocidade = 0;
}

void Automovel::abastece(int quantidade){
    combustivel+=quantidade;
    if(combustivel > capacidadeCombustivel)
        combustivel = capacidadeCombustivel;
}

void Automovel::consome(int quantidade){
    combustivel-=quantidade;
    if(combustivel < 0)
        combustivel = 0;
}