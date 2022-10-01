#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Contacto { // Isto é para fazer copy & paste
    string nome; // para o programa no computador.
    unsigned int tel; // Mas pode nem ser sequer preciso
public: // -> Ver primeiro as perguntas.
    Contacto(string n, unsigned int t) : nome(n), tel(t) {}
    string getNome() const { return nome; }
    int getTel() const { return tel; }
    void setNome(string s) { nome = s; }
    void setTel(unsigned int t) { tel = t; }
};

class Agenda {
    vector<Contacto *> lista;

    Contacto *procuraContacto(string nome) const{
        for(auto p:lista)
            if(p->getNome() == nome)
                return p;
        return nullptr;
    }
public:
    Contacto * procuraContacto(string nome);

    void adicionaContacto(string nome, unsigned int tel) {
       Contacto *aux = procuraContacto(nome);

       if(aux != nullptr)
       {
           aux->setTel(tel);
       }else
           lista.push_back(new Contacto(nome, tel));
    }

    Agenda &operator=(const Agenda &outro)
    {
        if(this == &outro)
            return *this;

        for(auto p : lista)
            delete p;

        lista.clear();

        for(auto o : outro.lista)
        {
            lista.push_back(new Contacto(*o));
        }
        return *this;
    }

    Agenda(const Agenda &outro)
    {
        *this = outro;
    }

    ~Agenda(){
        for(auto p : lista)
            delete p;
    }
    // funções para procurar, remover, atualizar, listar. Pode faze-las como TPC
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
