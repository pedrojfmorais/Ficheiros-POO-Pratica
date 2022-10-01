//
// Created by pedro on 14/12/2021.
//

#ifndef AULA_PRATICA_16_PEIXE_H
#define AULA_PRATICA_16_PEIXE_H

#include <string>

using namespace std;

class Aquario;

class Peixe{

private:

    Aquario *meuAquario;

    string nomeEspecie;
    string cor;
    double peso;
    int numeroSerie;

    static int nSerieAtual;

    int vezesAteMorrer;

public:

    Peixe(const string & nome, const string & cor = "cinzento");

    void registaAquario(Aquario *a);

    void alimentar(double quantidadeAlimento);

    string getNomeEspecie() const;
    string getCor() const;
    int getNumeroSerie() const;

    double getPeso() const;
    void setPeso(double novoPeso);

    int getVezesAteMorrer() const;
    void setVezesAteMorrer(int vezesAteMorrer);

    void decrementarVezesAteMorrer();

    string getDescricao() const;

};

#endif //AULA_PRATICA_16_PEIXE_H
