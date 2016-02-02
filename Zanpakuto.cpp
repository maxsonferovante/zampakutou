#include<iostream>
#include<string>

#include<stdlib.h>
#include<time.h>

#include "Zanpakuto.hpp"

using std::cout;

using std::string;

Zanpakuto::Zanpakuto()
{
    this->empunhada = false;
    this->modoShinkai = false;
    this->modoBankai = false;
}
Zanpakuto::Zanpakuto(const string &nome, bool empu)
{
    this->nomedaZanpakuto = nome;
    this->empunhada = empu;
    this->damoDireto = 10;
    this->damoRajada = 15;
    this->resistenciadaZanpakuto =8;
   
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
    this->empunhada = true;
    cout<<"A sua Zanpakuto esta empunhada prepara-se para lutar!"; 
}
void Zanpakuto::transformarShinkai()
{
    if (this->empunhada == true)
    {
        if (this->empunhada == true && this->modoShinkai == false && this->modoBankai == false)
        {
            this->modoShinkai = true;
            cout<<"O modo Shinkai da "<<this->nomedaZanpakuto<<" esta ativa!";
        }
        else
            cout<<"O modo Shikai ou Bankai ja esta ativo.";
    }
    else
        cout<<"Antes de invocar sua Shinkai, empenhe-a!";
}
void Zanpakuto::transformarBankai()
{
    if (this->empunhada == true)
    {
        if (this->modoShinkai == false && this->modoBankai == false)
        {
            this->modoBankai = true;
            cout<<"O modo Bankai da "<<this->nomedaZanpakuto<<" esta ativa!";
        }
        else        
            cout<<"O modo Shikai ou Bankai ja esta ativo.";
    }
    else
        cout<<"Antes de invocar sua Bankai, empunhe-a!";
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
void Zanpakuto::atacaDiretoZanpakuto(int *resistenciadoHollow)
{
    if (this->damoDireto == *resistenciadoHollow)
       this->resistenciadaZanpakuto -=2;
    else
        if (this->damoDireto < *resistenciadoHollow)
            this->resistenciadaZanpakuto -=3;
        else
            *resistenciadoHollow -=(this->damoDireto/2);
}
void Zanpakuto::rajadadeReiatsuZanpakuto(int *resistenciadoHollow)
{
        if(this->damoRajada == *resistenciadoHollow)
            this->resistenciadaZanpakuto -=1;
        else
            if (this->damoRajada < *resistenciadoHollow)
                this->resistenciadaZanpakuto-2;
            else
                *resistenciadoHollow -=(this->damoRajada);
}
