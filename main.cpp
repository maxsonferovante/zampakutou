#include<iostream>
#include "Zanpakuto.hpp"

using std::string;
using std::cout;

int main(){
    
    Zanpakuto espada("zangetsu", true); // Zanpakuto(const string &nome, bool empu)
    int resistenciadoHollow = 40;
    espada.empunharZanpakuto();
    espada.transformarBankai();
    
    do
    {
        cout<<"\nA resistencia do Hollow e "<<resistenciadoHollow<<std::endl;
        resistenciadoHollow = espada.atacaDiretoZanpakuto(resistenciadoHollow);    
        cout<<"\nApos o ataque direto e "<<resistenciadoHollow;
        
    }while(resistenciadoHollow >0 );
    
    espada.transformarBankai();
    espada.empunharZanpakuto();
    return 0;
    }