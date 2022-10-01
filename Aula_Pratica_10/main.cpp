#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

//Ficha 3 Ex1

class Ponto{

public:

    Ponto(int novoX, int novoY);
    Ponto();

    void mudaX(int novoX);
    int devolveX() const;
    void mudaY(int novoY);
    int devolveY() const;

    double distancia(const Ponto &segundoPonto) const;

    string descricao() const;

private:
    int x, y;

};

Ponto::Ponto(int novoX, int novoY): x(novoX), y(novoY) {}
Ponto::Ponto(): Ponto(0,0){}

void Ponto::mudaX(int novoX) {x = novoX;}
int Ponto::devolveX() const {return x;}

void Ponto::mudaY(int novoY) {y = novoY;}
int Ponto::devolveY() const {return y;}

double Ponto::distancia(const Ponto &segundoPonto) const{
    return sqrt((pow(segundoPonto.devolveX()-x, 2))+ pow(segundoPonto.devolveY()-y,2));
}

string Ponto::descricao() const {
    ostringstream oss;
    oss << "(" << x << "," << y <<")";
    return oss.str();

}
/*
int main() {
    Ponto a(1,2);
    Ponto b(3,4);
    Ponto const c(5,6);

    cout << a.distancia(b) << endl;

    cout << c.descricao() << endl;

    return 0;
}
*/

//Ficha3 Ex3

class Retangulo{

public:

    Retangulo(Ponto &p, unsigned int largura, unsigned int altura);

    Ponto obtemPontoSupEsq() const;
    unsigned int obtemLargura() const;
    unsigned int obtemAltura() const;

    double obtemArea() const;
    bool sobrepoeA(const Retangulo & outro) const;

private:

    Ponto pSupEsq;
    unsigned int largura, altura;

};

int main()
{
    return 0;
}