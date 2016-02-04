#include<iostream>
#include<string>

#include<stdlib.h>
#include<time.h>

#include "Zanpakuto.hpp"

using std::cout;

using std::string;

Zanpakuto::Zanpakuto()
:damoDireto(40), damoRajada(65), resistenciadaZanpakuto(30)
{
    this->empunhada = false;
    this->modoShinkai = false;
    this->modoBankai = false;
    this->nomedaZanpakuto ="Zanpakuto";
}
Zanpakuto::Zanpakuto(const string &nome, bool empu)
:empunhada(empu), damoDireto(40), damoRajada(65), resistenciadaZanpakuto(30)
{
    this->nomedaZanpakuto = nome;
    if (this->nomedaZanpakuto == "zangetsu")
    {
            this->modoShinkai = true;
            this->modoBankai = false;
    }
    else
    {
        this->modoShinkai = false;
        this->modoBankai = false;
    }
}

Zanpakuto::~Zanpakuto()
{
}
void Zanpakuto::empunharZanpakuto()
{
    if (not this->empunhada || this->nomedaZanpakuto.compare("zangetsu") == 0)
    {
        this->empunhada = true;
        cout<<"\nA sua Zanpakuto esta empunhada prepara-se para lutar!"; 
    }
    else
    {
        this->empunhada = false;
        cout<<"\nA sua Zanpakuto esta desempunhada!";         
    }
}
void Zanpakuto::transformarShinkai()
{
    if (this->empunhada)
    {
        if (not this->modoShinkai)
        {
            this->modoShinkai = true;
            this->damoDireto+=2;
            this->damoRajada+=4;
            cout<<"\nO modo Shinkai da "<<this->nomedaZanpakuto<<" esta ativo!";
        }
        else
        {
            this->modoShinkai = false;
            this->damoDireto-=2;
            this->damoRajada-=4;
            cout<<"\nO modo Shikaija da "<<this->nomedaZanpakuto<<" esta desativada.";
        }
    }
    else
        cout<<"\nAntes de invocar sua Shinkai, empenhe-a!";
}
void Zanpakuto::transformarBankai()
{
    if (this->empunhada)
    {
        if (not this->modoBankai)
        {
            this->modoBankai = true;
            this->damoDireto+=4;
            this->damoRajada+=8;
            cout<<"\nO modo Bankai da "<<this->nomedaZanpakuto<<" esta ativo!";
        }
        else{
            this->modoBankai = false;
            this->damoDireto-=4;
            this->damoRajada-=8;
            cout<<"\nO modo Bankai da "<<this->nomedaZanpakuto<<" esta desativada.";
        }
    }
    else
        cout<<"\nAntes de invocar sua Bankai, empunhe-a!";
}
bool Zanpakuto::konsodaZanpakuto(const string &fantasma)
{
    if(fantasma.compare("F") == 0)
    {    
        srand(time(NULL));
        switch(rand()%3)
        {
            case 1:  // 1 para pecados perdoáveis em vida.
            {
                cout<<"\nO funeral de alma mandou o fantasma para Soul Society...\n";
            }break;
            case 2:  //2  para pecados não perdoáveis em vida.
            {
                cout<<"\nO funeral de alma mandou o fantasma para inferno...\n";    
            }break;
        }
        return true;
    }
    else
    {
        cout<<"\nTrata-se de um Hollow. Nesse caso, a morte por Sublimacao é indicada...\n";
        return false;
    }
}
int Zanpakuto::atacaDiretoZanpakuto(int resistenciadoHollow)
{
    if (this->damoDireto == resistenciadoHollow)
    {
       this->resistenciadaZanpakuto -=2;
       resistenciadoHollow -=4;
    }
    else{
            if (this->damoDireto < resistenciadoHollow)
	            	this->resistenciadaZanpakuto -=3;
        	else
                if (this->damoDireto > resistenciadoHollow)
            		resistenciadoHollow -=(this->damoDireto/2);
                else
                    cout<<"\nO hollow resistiu o ataque direto\n";
    	}
    niveldeResistenciaZanpakuto();
    if (resistenciadoHollow < 0)
        resistenciadoHollow = 0;
    return resistenciadoHollow;
}
int Zanpakuto::rajadadeReiatsuZanpakuto(int resistenciadoHollow)
{
    if(this->damoRajada == resistenciadoHollow)
    {
        this->resistenciadaZanpakuto -=1;
        resistenciadoHollow -= 2;
    }
    else{
            if (this->damoRajada < resistenciadoHollow)
                this->resistenciadaZanpakuto-=2;
            else
                if (this->damoRajada > resistenciadoHollow)
            		resistenciadoHollow -=(this->damoDireto/2);
                else
                    cout<<"\nO hollow resistiu a rajada de  reiatsu\n";                
        }
    niveldeResistenciaZanpakuto();
    if (resistenciadoHollow < 0)
        resistenciadoHollow = 0;
    return resistenciadoHollow;
}
void Zanpakuto::niveldeResistenciaZanpakuto()
{
    if(this->resistenciadaZanpakuto<4)
    {
        cout<<"\nResistencia da sua Zanpakuto esta baixa... \n";
        if (this->modoShinkai && this->nomedaZanpakuto.compare("zangetsu") != 0)
            transformarShinkai();
        else
            if(this->modoBankai)
                transformarBankai();
            else
            {
                empunharZanpakuto();
            }              
    }
}