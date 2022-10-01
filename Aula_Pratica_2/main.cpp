#include <iostream>
using namespace std;

// Ficha 1 Ex4
/*
void imprime(const char * string)
{
    cout << string << endl;
}

void imprime(const char * string, int a)
{
    cout << string << a << endl;
}

void imprime(int a, const char * string)
{
    cout << a << string << endl;
}

int main(){
    imprime("ola");
    imprime("a idade é: ", 25);
    imprime(100, "euros");

    return 0;
}
*/

//Ficha 1 Ex5
/*
double soma(int a = 0, int b = 0, int c = 0)
{
    return a + b + c;
}

int main(){
    cout << "\n" << soma() << soma(1) << endl;
    cout << soma(1,2) << soma(1,2,3) << endl;

    return 0;
}
*/

//Ficha 1 Ex6
/*
void troca(int &a, int &b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}

int main(){
    int a = 5, b = 10;
    troca(a,b);
    cout << "\na = " << a << "\nb = " << b;

    return 0;
} // aparece a = 10 e b = 5
*/
