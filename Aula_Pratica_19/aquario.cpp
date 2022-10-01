//
// Created by pedro on 14/12/2021.
//

#include "aquario.h"
#include "peixe.h"
#include <algorithm>
#include <vector>

using namespace std;

bool Aquario::existePeixe(int nSerie) const {
    for(const auto& peixe : peixes)
        if(peixe->getNumeroSerie() == nSerie)
            return true;
    return false;
}

void Aquario::alimentarPeixes(double quantAlimento) {
    for (auto peixe : peixes)
        peixe->alimentar(quantAlimento);

    retiraPeixesMortos();
    adicionaPeixesNovos();
}

void Aquario::mataPeixe(Peixe *p) {
    if(existePeixe(p->getNumeroSerie()))
        peixesMortos.push_back(p);
}

void Aquario::retiraPeixesMortos(){
    for(auto morto : peixesMortos) {
        for (auto it = peixes.begin(); it != peixes.end(); it++){
            if (*it == morto) {
                delete *it;
                peixes.erase(it);
                break;
            }
        }
    }
    peixesMortos.clear();
}

void Aquario::adicionaPeixe(Peixe *p) {
    peixesNovos.emplace_back(p);
}

void Aquario::adicionaPeixesNovos() {
    peixes.insert(peixes.end(),peixesNovos.begin(), peixesNovos.end());
    peixesNovos.clear();
}

void Aquario::limpaDadosVetores() {
    for(auto peixe : peixes)
        delete peixe;

    for(auto novo : peixesNovos)
        delete novo;

    peixes.clear();
    peixesMortos.clear();
    peixesNovos.clear();
}

Aquario::~Aquario() {
    limpaDadosVetores();
}

vector<Peixe *> Aquario::getPeixes() const{
    return peixes;
}

Aquario & Aquario::operator=(const Aquario &outro) {
    if(this == &outro)
        return *this;

    limpaDadosVetores();

    for(auto p : outro.peixes) {
        Peixe * aux = new Peixe(*p);
        aux->registaAquario(this);
        peixes.push_back(aux);

        if(find(outro.peixesMortos.begin(),outro.peixesMortos.end(),p) != outro.peixesMortos.end())
        {
            peixesMortos.push_back(aux);
        }
    }

    for(auto p : outro.peixesNovos)
    {
        Peixe * aux = new Peixe(*p);
        aux->registaAquario(this);
        peixesNovos.push_back(aux);
    }

    return *this;
}

Aquario::Aquario(const Aquario &outro) {
    *this = outro;
}