//
// Created by pedro on 26/10/2021.
//

#include <iostream>

using namespace std;

class MSG{

public:

    MSG();
    MSG(char letra);
    MSG(const MSG &objecto);
    ~MSG();

    string obtemInfo() const;
    void teste();

private:
    char letra;
    int num;
    static int numAtual;

};

#ifndef AULA_PRATICA_6_MSG_H
#define AULA_PRATICA_6_MSG_H

#endif //AULA_PRATICA_6_MSG_H
