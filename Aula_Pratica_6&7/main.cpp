#include <iostream>
#include "automovel.h"

//Ficha 2 Ex6
/*
//automovel.cpp/.h

int main() {

    Automovel a;

    a.abastece(10000);


    return 0;
}
*/

//Ficha 2 Ex7

#include "MSG.h"

int main()
{
    MSG a{'A'};
    MSG b;
    MSG &c = b;
    MSG d = b;
    a = b;

    a.teste();

    MSG mat[2] = {'r', 's'};
    //MSG mat[2]; //se não tiver construtor por omissão não funciona

    cout << a.obtemInfo() << endl;
    cout << b.obtemInfo() << endl;

    return 0;
}