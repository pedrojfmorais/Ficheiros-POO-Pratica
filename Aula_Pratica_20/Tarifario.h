//
// Created by Pedro on 06/01/2022.
//

#ifndef AULA_PRATICA_20_TARIFARIO_H
#define AULA_PRATICA_20_TARIFARIO_H

class Tarifario{

protected:
    void apagaTreinos();

public:

    Tarifario(): numTreinos(0), duracaoTreinos(nullptr) {}
    Tarifario(const Tarifario & outro);
    virtual ~Tarifario(){apagaTreinos();}

    Tarifario & operator=(const Tarifario & outro);

    virtual Tarifario * duplica() = 0;

    void acrescentaTreino(int novo);
    virtual int calculaPagamento() = 0;

    int * getDuracaoTreinos() const;
    int getNumTreino() const;

private:
    int *duracaoTreinos;
    int numTreinos;

};

#endif //AULA_PRATICA_20_TARIFARIO_H
