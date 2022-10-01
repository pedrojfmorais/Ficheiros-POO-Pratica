#include <iostream>
#include <sstream>

using namespace std;

//Ficha 1 Ex9
/*
int main() {

    string numeros[11] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez"};

    string input;

    while(true)
    {
        cout << "Insira um numero:";
        cin >> input;

        if(!input.compare("fim"))
            break;

        istringstream aux(input);

        int num;
        aux >> num;

        if(aux.fail())
        {
            for(int i = 0; i < 11; i++)
            {
                if(input == numeros[i])
                {
                    cout << i << endl;
                    break;
                }
                if(i == 10)
                    cout << "Nao conheco isso" << endl;
            }

        } else
        {
            if(num >= 0 and num <= 10)
                cout << numeros[num] << endl;
            else
                cout << "Nao conheco isso" << endl;
        }
        cin.ignore();
        cin.ignore();
    }

    return 0;
}
*/

//Ficha 1 Ex 11
/*
namespace DataStorage{
    bool dadosSaoValidos(string inputDataStorage)
    {
        return inputDataStorage.length() >= 5 and inputDataStorage.length() <= 10;
    }
};

namespace UserInterface{
    bool dadosSaoValidos(string inputDataStorage)
    {
        if(inputDataStorage.length()<1) return false;

        return inputDataStorage[0] >= 'A' and  inputDataStorage[0] <= 'Z';
    }
};

int main()
{
    //b) i)
/*
    cout << DataStorage::dadosSaoValidos("String");
    cout << UserInterface::dadosSaoValidos("String");
*/
    //b) ii)
/*
    using DataStorage::dadosSaoValidos;
    using UserInterface::dadosSaoValidos;
    cout << DataStorage::dadosSaoValidos("String");
    cout << UserInterface::dadosSaoValidos("String");
*/
    //b) iii)
/*
    using namespace DataStorage;
    cout << dadosSaoValidos("String");
    cout << UserInterface::dadosSaoValidos("String");
*/
    //b) iv)
/*
    using namespace DataStorage;
    using namespace UserInterface;
    cout << DataStorage::dadosSaoValidos("String");
    cout << UserInterface::dadosSaoValidos("String");
*/
/*
    return 0;
}
*/

//Ficha 2 Ex

const int TAM = 5;

struct Tabela{

    int matriz[TAM];
/*
    int preencheMatriz(int valor)
    {
        for(int i = 0; i < TAM; i++)
        {
                matriz[i] = valor;
        }
    }
*/
};

void preencheTabela(Tabela &t, int valor)
{
    for(int i = 0; i < TAM; i++)
        t.matriz[i] = valor;
}

void mostraTabela(Tabela t)
{
    for (int i = 0; i < TAM; ++i)
        cout << "|" << t.matriz[i];
    cout << "|" << endl;
}

int main()
{
    Tabela t;

    mostraTabela(t);

    preencheTabela(t, 5);

    mostraTabela(t);

    return 0;
}