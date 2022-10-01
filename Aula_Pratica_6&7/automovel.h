//
// Created by pedro on 26/10/2021.
//

#include <iostream>
using namespace std;

class Automovel{
public:
    string obtemMatricula() const;
    string obtemMarca() const;
    string obtemModelo() const;
    int obtemCavalos() const;
    int obtemVelocidade() const;
    float obtemQuantidadeCombustivel() const;

    void acelera(int forca);
    void trava(int forca);
    void abastece(int quantidade);
    void consome(int quantidade);

    Automovel();
    Automovel(Automovel &outro); //inicializa um objeto igual ao outro
    Automovel(string novaMatricula, string novaMarca, string novoModelo, int novosCavalos,
              int novaCapacidadeCombustivel, int novaVelocidadeMaxima);
    ~Automovel();


private:
    float combustivel;
    int capacidadeCombustivel;
    int velocidade;
    int velocidadeMaxima;

    string matricula;
    string marca;
    string modelo;
    int cavalos;

    static int n1, n2;
    static string letras;
};

#ifndef AULA_PRATICA_6_AUTOMOVEL_H
#define AULA_PRATICA_6_AUTOMOVEL_H

#endif //AULA_PRATICA_6_AUTOMOVEL_H
