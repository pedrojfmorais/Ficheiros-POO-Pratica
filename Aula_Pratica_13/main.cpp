#include <iostream>
#include <sstream>

using namespace std;

//Ficha4 Ex1

class Fracao{

private:
    int numerador;
    unsigned int denominador;


public:
    Fracao(int numerador = 0, int denominador = 1);

    int getNumerador() const;
    unsigned int getDenominador() const;

    void setNumerador(int numerador);
    void setDenominador(unsigned int denominador);

    string obtemDescricao() const;

    Fracao operator*(const Fracao & outro);
    Fracao &operator++(); //++a
    Fracao operator++(int); // a++
    Fracao operator*=(const Fracao & outro);
    Fracao operator<<(const Fracao & outro);
    explicit operator int();

};

Fracao::Fracao(int numerador, int denominador):
                numerador(numerador), denominador(denominador==0 ? 1:denominador) {}

int Fracao::getNumerador() const {return numerador;}
unsigned int Fracao::getDenominador() const {return denominador;}

void Fracao::setNumerador(int numerador) {Fracao::numerador = numerador;}
void Fracao::setDenominador(unsigned int denominador) {Fracao::denominador = denominador;}

string Fracao::obtemDescricao() const {
    ostringstream oss;
    oss << "(" << getNumerador() << "/" << getDenominador() << ")" << endl;
    return oss.str();
}

Fracao Fracao::operator*(const Fracao &outro) {
    return Fracao(getNumerador()*outro.getNumerador(), getDenominador()*outro.getDenominador());
}

Fracao operator* (const Fracao &a, Fracao b){
    return Fracao(a.getNumerador()*b.getNumerador(), a.getDenominador()*b.getDenominador());
}

bool operator==(const Fracao &a, const Fracao &b){
    return a.getNumerador() * b.getDenominador() == b.getNumerador() * a.getDenominador();
}

Fracao Fracao::operator*=(const Fracao &outro) {
    setNumerador(getNumerador()*outro.getNumerador());
    setDenominador(getDenominador()*outro.getDenominador());
    return *this;
}

Fracao &Fracao::operator++() {
    setNumerador(getNumerador()+getDenominador());
    return *this;
}

Fracao Fracao::operator++(int) {
    Fracao aux(*this);
    setNumerador(getNumerador()+getDenominador());
    return aux;
}

Fracao::operator int(){
    return (int) getNumerador()/getDenominador();
}

ostream &operator<<(ostream &saida, const Fracao &a){
    saida << a.obtemDescricao();
    return saida;
}

istream &operator>>(istream &entrada, Fracao &a){
    int num;
    unsigned int den;

    entrada >> num >> den;

    a.setNumerador(num);
    a.setDenominador(den);

    return entrada;
}

int main() {

    Fracao f(2, 5);
    Fracao g(5, 8);

    f*=g*=2;
    ++f;
    cout << f++.obtemDescricao() << endl;
    cout << f.obtemDescricao() << endl;
    cout << (int) f << endl;
    cout << f << endl;

    return 0;
}
