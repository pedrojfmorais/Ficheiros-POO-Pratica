#include <iostream>
#include "animal.h"

#include <vector>

using namespace std;

int main() {

    vector<Animal *> mat;

    mat.push_back(new Gato);
    mat.push_back(new Peixe);

    for(auto a : mat)
        a->alimenta();

    return 0;
}
