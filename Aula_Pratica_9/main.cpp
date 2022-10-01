#include <iostream>
#include <vector>
#include <initializer_list>
#include <sstream>
#include <algorithm>

using namespace std;

//Ficha2 Ex9
/*
class TV{
public:
    void ligarDesligarTV();
    bool aumentaVolume();
    bool diminuiVolume();
    bool mudaCanal(unsigned int canal);
    bool proxCanal();
    bool antCanal();
    string estadoAtual() const;

    //TV(): volume(5), canalAtual(1), estado(false), canais({"RTP1", "RTP2", "SIC", "TVI"}) {};

    TV(initializer_list<string> novosCanais);

    TV(vector<string> novosCanais);

private:
    const vector<string> canais;
    bool estado; //true = ligado, false = desligado
    int volume;
    int canalAtual;
};

void TV::ligarDesligarTV(){estado = !estado;}

bool TV::aumentaVolume()
{
    if(!estado)
        return false;
    if(volume >= 10)
        return false;

    ++volume;
    return true;
}
bool TV::diminuiVolume()
{
    if(!estado)
        return false;
    if(volume <= 0)
        return false;

    --volume;
    return true;
}

bool TV::mudaCanal(unsigned int canal) {

    if(!estado)
        return false;
    if(canalAtual == canal)
        return false;

    if(canal < 1 and canal > canais.size())
        return false;

    canalAtual = canal;
    cout << "Mudou para o canal:" << canais.at(canal-1) << endl;
    return  true;
}

bool TV::proxCanal() {

    if(!estado)
        return false;
    if(canalAtual >= canais.size())
        return false;

    canalAtual++;
    cout << "Mudou para o canal:" << canais.at(canalAtual-1) << endl;
    return true;

}
bool TV::antCanal() {

    if(!estado)
        return false;
    if(canalAtual <= 1)
        return false;

    canalAtual--;
    cout << "Mudou para o canal:" << canais.at(canalAtual-1) << endl;

    return true;
}

string TV::estadoAtual() const{

    ostringstream output;

    if(!estado)
        output << "desligada";
    else
    {
        output << "Canal atual " << canais[canalAtual-1] << "\n";

        int i = 1;
        for(string str : canais)
        {
            output << str << " -> Canal " << i << "\n";
            i++;
        }
        output << "Volume: " << volume;
    }
    return output.str();
}

TV::TV(initializer_list<string> novosCanais): volume(5), canalAtual(1), estado(false), canais(novosCanais) {};

TV::TV(vector<string> novosCanais): volume(5), canalAtual(1), estado(false), canais(novosCanais) {};


int main() {

    TV a{{"A", "B", "C"}};

    //cout << a.estadoAtual() << endl;
    a.ligarDesligarTV();
    a.mudaCanal(2);

    std::cout << a.estadoAtual() << std::endl;

    return 0;
}

*/

//Ficha 2 Ex9

class ListaEleitores{

public:

    ListaEleitores();
    ListaEleitores(initializer_list<int>);
    int adicionaEleitores(initializer_list<int> novosEleitores);
    bool removeEleitor(int removeEleitor);
    int removeEleitores(int inicioIntervaloRemoveEleitor, int fimIntervaloRemoveEleitor);
    string descricaoEleitores() const;
private:
    bool existe(int) const;
    vector<int> lista;
};

ListaEleitores::ListaEleitores() {}
ListaEleitores::ListaEleitores(initializer_list<int> novosEleitores){
    adicionaEleitores(novosEleitores);
}

bool ListaEleitores::existe(int eleitor) const {
    return find(lista.begin(), lista.end(), eleitor) != lista.end();
}

int ListaEleitores::adicionaEleitores(initializer_list<int> novosEleitores) {
    int total = 0;
    for(int num : novosEleitores)
    {
        if(!existe(num))
        {
            lista.push_back(num);
            ++total;
        }
    }
}

int main(){

    return 0;
}