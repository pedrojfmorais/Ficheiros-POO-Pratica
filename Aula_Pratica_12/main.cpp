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
/*
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

Retangulo::Retangulo(Ponto &p, unsigned int largura, unsigned int altura) {

}

Ponto Retangulo::obtemPontoSupEsq() const {
    return pSupEsq;
}

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

    //auto it = retangulos.begin();

    //while(it != retangulos.end())
    //{
    //    if(it->obtemPontoSupEsq().devolveX() == p.devolveX()
    //    and it->obtemPontoSupEsq().devolveY() == p.devolveY())
    //        noPonto.push_back(*it);
    //    ++it;
    //}

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
*/
/*
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
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

class Aviso{

public:

    Aviso(const string novoTexto, Prego &p);
    int getXP() const;
    int getYP() const;
    //Aviso & operator=(const Aviso & outro);

    ~Aviso();

private:
    string texto;
    Prego &prego;

};

Aviso::Aviso(const string novoTexto, Prego &p): texto(novoTexto), prego(p)
{
    cout << "contruindo aviso no prego com mensagem: " << texto << endl;
}

Aviso::~Aviso()
{
    cout << "destruindo aviso com mensagem: " << texto << endl;
}

int Aviso::getXP() const {
    return prego.getX();
}

int Aviso::getYP() const {
    return prego.getY();
}
/*
Aviso &Aviso::operator=(const Aviso & outro)
{
    if(this==&outro)
        return  *this;

    texto = outro.texto;
    return *this;
}
*/
/*
int main()
{
    Prego p1(1,2);
    Prego p2(1,2);
    cout << p1.getX() << endl;
    Aviso a("asdasd", p1);
    Aviso b("asdasd", p2);
    p1.mudaDeSitio(10,11);
    cout << a.getXP() << endl;
    //a=b;

    vector<Aviso> v;
    v.push_back(a);
    v.push_back(b);

    return 0;
}
*/

//Ficha 3 Ex7

class Pessoa{

public:
    Pessoa(string novoNome);
    string getNome();

private:
    string nome;

};

Pessoa::Pessoa(string novoNome): nome(novoNome) {}

string Pessoa::getNome() {return nome;}

class RegistoCivil{

    vector<Pessoa*> populacao;

public:
    void addPessoa(Pessoa *p);
    Pessoa *obtemPtrPessoa(string nome);
    ~RegistoCivil();
    RegistoCivil(const RegistoCivil &outro);

    RegistoCivil & operator=(const RegistoCivil & outro);
};

void RegistoCivil::addPessoa(Pessoa *p) {
    populacao.push_back(p);
}

Pessoa *RegistoCivil::obtemPtrPessoa(string nome) {
    for(Pessoa * p : populacao)
        if(p->getNome() == nome)
            return p;

    return nullptr;
}

RegistoCivil::~RegistoCivil() {
    for(Pessoa * p : populacao)
        delete p;
}

RegistoCivil & RegistoCivil::operator=(const RegistoCivil & outro){
    if(this == &outro) return *this;

    for(Pessoa * p : populacao)
        delete p;

    populacao.clear();

    for(Pessoa * p : outro.populacao)
        populacao.push_back(new Pessoa(*p));

    return *this;
}

RegistoCivil::RegistoCivil(const RegistoCivil &outro)
{
    *this = outro;
}

class Conta{

public:

    Conta(Pessoa &p);
    int levanta(int quanto);
    void deposita(int quanto);
    const Pessoa * obtemTitular() const;
    int obtemSaldo() const;

private:
    static int id_conta_atual;
    int id_conta;
    Pessoa *titular;
    int saldo;

};

int Conta::id_conta_atual = 1;

Conta::Conta(Pessoa &p): id_conta(id_conta_atual++), titular(&p) {}

class Banco{

public:

    Banco(initializer_list<Conta> novasContas);

private:
    vector<Conta> contas;

};

Banco::Banco(initializer_list<Conta> novasContas): contas(novasContas) {}

int main()
{
    vector<Pessoa> pessoas;
    pessoas.emplace_back(Pessoa("Marco"));

    Pessoa b("Pedro");

    Conta c(b);
    Banco d({c});



    return 0;
}