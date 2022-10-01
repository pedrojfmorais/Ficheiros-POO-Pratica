#include <iostream>
#include <vector>

using namespace std;

//Ficha2 Ex9

class TV{
public:
    void ligarDesligarTV();
    void aumentaVolume();
    void diminuiVolume();
    void mudaCanal(unsigned int canal);

private:
    vector<string> canais;
    bool estado; //true = ligado, false = desligado
    int volume;
    int canalAtual;

    TV(): volume(5), canalAtual(0), estado(false) {};
};

void TV::ligarDesligarTV(){!estado;}

void TV::aumentaVolume()
{
    if(volume < 10 and estado)
        volume++;
}
void TV::diminuiVolume()
{
    if(volume > 0 and estado)
        volume--;
}

void TV::mudaCanal(unsigned int canal) {

    if(estado and canal >= 0 and canal < canais.size())
    {
        canalAtual = canal;
        cout << "Mudou para o canal:" << canais.at(canal) << endl;
    }


}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
