#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>

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

//Ficha 3 Ex4

class Desenho{

public:

    Desenho(const string &novoNome);
    void inserirRetangulo(const Retangulo &r);
    vector<Retangulo> getRetangulosEmPonto(const Ponto &p) const;
    void eliminaRetangulos(double area);
    void somaAreaRetangulos() const;
    string descricaoDesenho() const;

private:
    string nome;
    vector<Retangulo> retangulos;
    bool sobrepoeAlgum(const Retangulo &r) const;

};

Desenho::Desenho(const string &novoNome): nome(novoNome) {}


bool Desenho::sobrepoeAlgum(const Retangulo &r) const
{
    auto it = retangulos.begin();

    while(it != retangulos.end())
    {
        if(r.sobrepoeA(*it))
            return true;
        ++it;
    }
    return false;
}

void Desenho::inserirRetangulo(const Retangulo &r) {

    if(!sobrepoeAlgum(r))
        retangulos.push_back(r);
}

vector<Retangulo> Desenho::getRetangulosEmPonto(const Ponto &p) const {

    vector<Retangulo> noPonto;

    for(const Retangulo &r : retangulos)
        if(r.obtemPontoSupEsq().devolveX() == p.devolveX()
           and r.obtemPontoSupEsq().devolveY() == p.devolveY())
            noPonto.push_back(r);

    //Outra forma
    /*
    auto it = retangulos.begin();

    while(it != retangulos.end())
    {
        if(it->obtemPontoSupEsq().devolveX() == p.devolveX()
        and it->obtemPontoSupEsq().devolveY() == p.devolveY())
            noPonto.push_back(*it);
        ++it;
    }
    */
    return noPonto;
}

void Desenho::eliminaRetangulos(double area) {

    auto it = retangulos.begin();

    while(it != retangulos.end())
    {
        if(it->obtemArea() > area)
            it = retangulos.erase(it);
        else
            ++it;
    }

}

class Prego{
    int x,y;
public:
    Prego(int a, int b) {
        x = a; y = b;
        cout << "construindo prego em " << x << "," << y << "\n";
    }
    ~Prego() {
        cout << "desconstruindo prego em " << x << "," << y << "\n";
    }
    void mudaDeSitio(int a, int b) {
        x = a; y = b;
    }
};

class Aviso{

public:

    Aviso(const string novoTexto, const Prego &p);
    ~Aviso();

private:
    string texto;
    Prego &prego;

};

int main()
{
    return 0;
}