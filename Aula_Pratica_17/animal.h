//
// Created by pedro on 16/12/2021.
//

#ifndef AULA_PRATICA_17_ANIMAL_H
#define AULA_PRATICA_17_ANIMAL_H

#include <iostream>

using namespace std;

class Animal{

public:
    virtual void alimenta() = 0; //nao existe em Animal, esta incompleta, nao e implementada em Animal
};


class Gato:public Animal{
public:
    void alimenta(){
        cout << "Biscoito" << endl;
    }
};

class Peixe:public Animal{
public:
    void alimenta(){
        cout << "Algas" << endl;
    }
};

#endif //AULA_PRATICA_17_ANIMAL_H
