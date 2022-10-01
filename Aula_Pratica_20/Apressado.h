//
// Created by Pedro on 06/01/2022.
//

#ifndef AULA_PRATICA_20_APRESSADO_H
#define AULA_PRATICA_20_APRESSADO_H

#include "Tarifario.h"

class Apressado : public Tarifario {

    int calculaPagamento() override;
public:
    Tarifario * duplica() override;

};

#endif //AULA_PRATICA_20_APRESSADO_H
