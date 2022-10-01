//
// Created by pedro on 26/10/2021.
//

#include "MSG.h"

#include <iostream>
#include <sstream>

using namespace std;

int MSG::numAtual = 1;

MSG::MSG(): MSG::MSG('x') {}

MSG::MSG(char novaLetra): letra(novaLetra), num(numAtual++){
    cout << "Criado, " << obtemInfo() << endl;
}
MSG::MSG(const MSG &objecto): letra(objecto.letra), num(objecto.num){
    cout << "Criado copia, " << obtemInfo() << endl;
}
MSG::~MSG() {
    cout << "Terminado, " << obtemInfo() << endl;
}

string MSG::obtemInfo() const{
    ostringstream oss;
    oss << "letra: " << letra << " numero: " << num;
    return oss.str();
}

void MSG::teste()
{
    MSG aux('y');
}
