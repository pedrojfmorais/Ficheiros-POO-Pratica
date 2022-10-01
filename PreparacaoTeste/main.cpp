#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Planta{
    double maxAltura;
    double percCrescimento;
public:
    virtual void asd();
    Planta &operator=(const Planta & outro){
        Planta novo;

        return novo;
    }
    int operator=(Planta a);
};

class Hospedeira : public Planta{
public:
    void asd() override{
        vector<int> asd;

        //percCrescimento +=1;
    }
};

class asd{
public:
    void asd123();
};

int main(){
   vector<string *> a;
   a.push_back(new string("a123"));
   a.push_back(new string("b123"));
   a.push_back(new string("c123"));
   a.push_back(new string("d123"));

   for(auto b : a)
       cout << *b << endl;
}