#include<iostream>
#include "Zampakutou.hpp"

using std::cout;
using std::cin;

Zampakutou::Zampakutou()
{
    this->empunhada = false;
    this->modoShinkai = false;
    this->modoBankai = false;
}
Zampakutou::Zampakutou(const string &nome, bool empu)
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

Zampakutou::~Zampakutou()
{
}
void Zampakutou::empunharZampakutou()
{
    if(this->empunhada == true)
        cout<<"A sua Zampakutou ja esta empunhada!";
    else
    {
        this->empunhada = true;
        cout<<"A sua Zampakutou esta empunhada prepara-se para lutar!";
    }
}
void Zampakutou::transformarShinkai()
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
void Zampakutou::transformarBankai()
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