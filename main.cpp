#include<iostream>
#include "Zanpakuto.hpp"

using std::string;
using std::cout;
using std::cin;

int main(){
    
    Zanpakuto espada; // Zanpakuto(const string &nome, bool empu)
    int resistencia = 7;
    espada.empunharZanpakuto();
    espada.transformarBankai();
    
    cout<<"\nResistencia do Hollow antes do ataque direto era "<<resistencia<<", agora "<<espada.atacaDiretoZanpakuto(resistencia);
    
    cout<<std::endl;
    return 0;
    }