#pragma once
#include<string>
using std::string;
class Zampakutou
{
public:
    Zampakutou();
    ~Zampakutou();
    bool transformarShinkai();
    bool transformarBankai();
private:
    bool modoBankai;
    bool modoShinkai;
    string nomedaZampakutou;
};

