#include <iostream>
using namespace std;

struct Porta {
    string aberta = "Sim";
    string cor = "Preta";
    string trancada = "Não";
};

int main() {
    Porta Porta1;
    cout <<"\nA porta está aberta?"<<endl <<Porta1.aberta <<endl;
    cout<<"\nQual a cor da porta?"<< endl <<Porta1.cor <<endl;
    cout<<"\nA porta está trancada?"<< endl <<Porta1.trancada<< endl;
    
    if (Porta1.aberta != "Não")
    cout<<"\nA porta está aberta, feche antes de sair.."<<endl;
    
    if (Porta1.cor != "Azul")
    cout <<"\nA cor foi mudada para " <<Porta1.cor<< endl;
    
    if (Porta1.trancada!= "Sim")
    cout<<"\nA porta deve ser fechada..."<< endl;
    return 0;
}
