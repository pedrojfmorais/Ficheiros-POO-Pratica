#include <iostream>
#include <sstream>

using namespace std;

//Ficha 1 Ex7
/*
int main()
{
    string nome, palavra;
    cout << "Insira o seu nome:";
    getline(cin, nome);

    istringstream iss(nome);

    while(!iss.eof())
    {
        iss >> palavra;
        cout << palavra;

        if(!palavra.compare("Silva"))
            cout << "\tConheco um silva";

        cout << endl;
    }

    return 0;
}
*/

//Ficha 1 Ex8
int main()
{

    string input;

    while(input.compare("fim"))
    {
        cout << "Insira um numero:";
        cin >> input;

        if(!input.compare("fim"))
            break;

        cout << input << endl;

        cin.ignore();
        cin.ignore();


    }

    return 0;
}
