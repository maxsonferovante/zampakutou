#include<iostream>
#include "Zanpakuto.hpp"

using std::string;
using std::cout;
using std::cin;

int main(){
    
    Zanpakuto espada; // Zanpakuto(const string &nome, bool empu)
    int resistenciadoHollow = 30;
    espada.empunharZanpakuto();
    espada.transformarBankai();
    
    cout<<"\nA resistencia do Hollow e "<<resistenciadoHollow<<std::endl;
    
    resistenciadoHollow = espada.atacaDiretoZanpakuto(resistenciadoHollow);
    
    cout<<"\nApos o ataque direto e"<<resistenciadoHollow;
    
    resistenciadoHollow = espada.rajadadeReiatsuZanpakuto(resistenciadoHollow);
    cout<<"\Apos o ataque com rajada de reiatsu e"<<resistenciadoHollow;
    
    espada.transformarBankai();
    espada.empunharZanpakuto();
    return 0;
    }