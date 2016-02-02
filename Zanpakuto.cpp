#include<iostream>
#include "Zanpakuto.hpp"

using std::cout;
using std::cin;

Zanpakuto::Zanpakuto()
{
    this->empunhada = false;
    this->modoShinkai = false;
    this->modoBankai = false;
}
Zanpakuto::Zanpakuto(const string &nome, bool empu)
{
    this->nomedaZampakutou = nome;
    this->empunhada = empu;
    
    if (this->nomedaZampakutou == "zangetsu")
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
void Zanpakuto::empunharZampakutou()
{
    if(this->empunhada == true)
        cout<<"A sua Zanpakuto ja esta empunhada!";
    else
    {
        this->empunhada = true;
        cout<<"A sua Zanpakuto esta empunhada prepara-se para lutar!";
    }
}
void Zanpakuto::transformarShinkai()
{
    if (this->empunhada == true)
    {
        if (this->empunhada == true && this->modoShinkai == false && this->modoBankai == false)
        {
            this->modoShinkai = true;
            cout<<"O modo Shinkai da "<<this->nomedaZampakutou<<" esta ativa!";
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
            cout<<"O modo Bankai da "<<this->nomedaZampakutou<<" esta ativa!";
        }
        else        
            cout<<"O modo Shikai ou Bankai ja esta ativo.";
    }
    else
        cout<<"Antes de invocar sua Bankai, empunhe-a!";
}