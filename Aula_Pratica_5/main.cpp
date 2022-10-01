#include <iostream>
#include <sstream>

using namespace std;

//Ficha 2 Ex1
/*
const int TAM = 5;

struct Tabela{

    int matriz[TAM];
};

void preencheTabela(Tabela &t, int valor)
{
    for(int i = 0; i < TAM; i++)
        t.matriz[i] = valor;
}

void mostraTabela(const Tabela &t)
{
    for (int i = 0; i < TAM; ++i)
        cout << "|" << t.matriz[i];
    cout << "|" << endl;
}

int obtemValor(const Tabela &t, int pos, int &flag)
{
    if(pos < 0 or pos >= TAM)
    {
        flag = 0;
        return -1;
    }

    return t.matriz[pos];
}

int mudaValor(Tabela &t, int pos, int valor)
{
    if(pos < 0 or pos >= TAM)
    {
        return -1;
    }

    t.matriz[pos] = valor;

    return 0;
}

int &elementoEm(Tabela &t, int pos)
{
    static int lixo;

    if(pos < 0 or pos >= TAM)
    {
        return lixo;
    }

    return t.matriz[pos];
}

int main()
{
    Tabela t;

    preencheTabela(t, 5);

    mostraTabela(t);

    elementoEm(t,2)=15;

    mostraTabela(t);

    cout << endl << elementoEm(t,2);

    return 0;
}
*/

//Ficha 2 Ex2

class Tabela{
public:
    void preenche(int valor);
    int &obtem(int pos);
    string obtemDescricao() const;

private:
    const static int TAM = 5;
    int matriz[TAM];
};

void Tabela::preenche(int valor) {
    for(int i = 0; i < TAM; i++)
        matriz[i] = valor;
}

int &Tabela::obtem(int pos) {
    static int lixo;

    if(pos < 0 or pos >= TAM)
    {
        return lixo;
    }

    return matriz[pos];
}

string Tabela::obtemDescricao() const{

    ostringstream oss;

    for (int i = 0; i < TAM; ++i)
        oss << "|" << matriz[i];
    oss << "|" << endl;

    return oss.str();
}

int main()
{

    return 0;
}
