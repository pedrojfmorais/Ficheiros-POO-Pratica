#include <iostream>

#include "livro.h"

using namespace std;

int main() {

    Livro l("tit", "eu");

    LivroPolicial p("tit", "eu", "tu", 15);

    FiccaoCientifica f("tit", "eu", "Marte", 2050, true);

    cout << l << p << f;

    return 0;
}
