#include<iostream>
#include "Zampakutou.hpp"

using std::cout;
using std::cin;

Zampakutou::Zampakutou()
{
    empunhada = false;
    modoShinkai = false;
    modoBankai = false;
}
Zampakutou::Zampakutou(const string &nome, bool empu)
{
    nomedaZampakutou = nome;
    empunhada = empu;
    if (nomedaZampakutou == "zangetsu")
    {
            modoShinkai = true;
            modoBankai = false;
    }
    else
    {
        modoShinkai = false;
        modoBankai = false;
    }
}

Zampakutou::~Zampakutou()
{
}
void Zampakutou::empunharZampakutou()
{
    if(empunhada == true)
        cout<<"A sua Zampakutou já está empunhada!";
    else
    {
        empunhada = true;
        cout<<"A sua Zampakutou está empunhada prepara-se para lutar!";
    }
}
void Zampakutou::transformarShinkai()
{
    if (empunhada == true)
    {
        if (empunhada == true && modoShinkai == false && modoBankai == false)
        {
            modoShinkai = true;
            cout<<"O modo Shinkai da "<<nomedaZampakutou<<" está ativa!";
        }
        else
            cout<<"O modo Shikai ou Bankai já está ativo.";
    }
    else
        cout<<"Antes de invocar sua Shinkai, empenhe-a!";
}
void Zampakutou::transformarBankai()
{
    if (empunhada == true)
    {
        if (modoShinkai == false && modoBankai == false)
        {
            modoBankai = true;
            cout<<"O modo Bankai da "<<nomedaZampakutou<<" está ativa!";
        }
        else        
            cout<<"O modo Shikai ou Bankai já está ativo.";
    }
    else
        cout<<"Antes de invocar sua Bankai, empunhe-a!";
}