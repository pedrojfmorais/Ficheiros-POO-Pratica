#include <iostream>

//Ficha 5 Ex5
//sem vetor

using namespace std;
/*
class Pessoa {
    int bi;
public:
    int getBI() const{return bi;}
};

class Clube {
    Pessoa * * socios;
    int tam;
public:
    Clube(int t) {
        tam = t;
        socios = new(nothrow) Pessoa * [tam];
        if(socios != nullptr)
            for (unsigned int i=0; i<tam; i++)
                socios[i]= nullptr;
    }
    Clube(const Clube &outro){
        //repetido no operador atribuição

        //tam = outro.tam;
        //socios = new(nothrow) Pessoa * [tam];
        //if(socios != nullptr)
        //    for (unsigned int i=0; i<tam; i++)
        //        socios[i]=outro.socios[i];

        socios = nullptr;

        *this=outro;
    }

    ~Clube() { delete []socios; }
    void setMembroDoClube(Pessoa * p, int pos) {
        socios[pos] = p;
    }
    Clube &operator=(const Clube &outro);

    int procuraPessoa(Pessoa *p)
    {
        for (int i = 0; i < tam; ++i) {
            if(socios[i]->getBI() == p->getBI())
                return i;
        }
        return -1;
    }

    bool addSocio(Pessoa *p)
    {
        if(procuraPessoa(p) != -1)
            return false;

        Pessoa **aux = new Pessoa * [tam+1];
        for (int i = 0; i < tam; ++i) {
            aux[i] = socios[i];
        }
        socios[tam] = p;
        ++tam;

        delete [] socios;
        socios = aux;
        return true;
    }

    bool removeSocio(Pessoa *p)
    {
        int pos = procuraPessoa(p);
        if(pos == -1)
            return false;

        if(tam == 1) {
            delete[] socios;
            socios = nullptr;
            tam = 0;
            return true;
        }

        Pessoa ** aux = new Pessoa * [tam-1];
        for (int i = 0; i < pos; ++i) {
            aux[i] = socios[i];
        }

        for (int i = pos+1; i < tam; ++i) {
            aux[i-1] = socios[i];
        }

        delete [] socios;
        socios = aux;
        --tam;
        return true;
    }
};

bool operator==(const Pessoa &a, const Pessoa &b)
{
    return a.getBI() == b.getBI();
}

Clube &Clube::operator=(const Clube &outro) {
    if(this==&outro) return *this;

    delete []socios;
    tam = 0;

    tam = outro.tam;
    socios = new(nothrow) Pessoa * [tam];
    if(socios != nullptr)
        for (unsigned int i=0; i<tam; i++)
            socios[i]=outro.socios[i];

    return *this;
}

int main() {
    Pessoa a, b;
    Clube c(50);
    c.setMembroDoClube(&a, 0);
    c.setMembroDoClube(&b, 1);
    return 0;
}
*/


#include <vector>

//Ficha 5 Ex5
//com vetor

class Pessoa {
    int bi;
public:
    int getBI() const{return bi;}
};

class Clube {
    //Pessoa * * socios;
    vector<Pessoa *> socios;
public:

    void setMembroDoClube(Pessoa * p, int pos) {
        socios[pos] = p;
    }

    int procuraPessoa(Pessoa *p)
    {
        for (int i = 0; i < socios.size(); ++i) {
            if(socios[i]->getBI() == p->getBI())
                return i;
        }
        return -1;
    }

    bool addSocio(Pessoa *p)
    {
        if(procuraPessoa(p) != -1)
            return false;

        socios.emplace_back(p);

        return true;
    }

    bool removeSocio(Pessoa *p)
    {
        auto it = socios.begin();

        while (it != socios.end())
        {
            if((*it)->getBI() == p->getBI())
            {
                socios.erase(it);
                return true;
            }
            ++it;
        }
        return false;
    }
};

bool operator==(const Pessoa &a, const Pessoa &b)
{
    return a.getBI() == b.getBI();
}


int main() {
    Pessoa a, b;
    Clube c;
    c.addSocio(&a);
    return 0;
}

