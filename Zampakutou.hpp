#pragma once
#include<string>
using std::string;
class Zampakutou
{
public:
    Zampakutou();
    Zampakutou(const string &, bool);
    ~Zampakutou();
    void empunharZampakutou();
    void transformarShinkai();
    void transformarBankai();
private:
    bool modoBankai;
    bool modoShinkai;
    bool empunhada;
    string nomedaZampakutou;
};

