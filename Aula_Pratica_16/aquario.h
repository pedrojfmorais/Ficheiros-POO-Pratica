//
// Created by pedro on 14/12/2021.
//

#ifndef AULA_PRATICA_16_AQUARIO_H
#define AULA_PRATICA_16_AQUARIO_H

#include <vector>

using namespace std;

class Peixe;

class Aquario{

private:
    vector<Peixe *> peixes;
    vector<Peixe *> peixesMortos;
    vector<Peixe *> peixesNovos;

public:

    ~Aquario();

    Aquario(const Aquario & outro);
    Aquario &operator=(const Aquario &b);

    vector<Peixe *> getPeixes() const;

    void limpaDadosVetores();
    bool existePeixe(int nSerie) const;
    void alimentarPeixes(double alimento);
    void mataPeixe(Peixe *p);
    void retiraPeixesMortos();
    void adicionaPeixe(Peixe *p);
    void adicionaPeixesNovos();

};

#endif //AULA_PRATICA_16_AQUARIO_H
