#include<string>
using std::string;

class Zanpakuto
{
    public:
        Zanpakuto();
        Zanpakuto(const string &, bool);
        ~Zanpakuto();
        
        void empunharZanpakuto();
        void transformarShinkai();
        void transformarBankai();
        
        void konsodaZanpakuto();
        void sublimacaoZanpakuto(); 
        void transferenciaZanpakuto(const string &, const string &);
        
    private:
        string nomedaZanpakuto;
        string nomedaFormaSelada;
        string comandodeLiberacao;
        string nomeLiberacaoFinal;
        bool modoBankai;
        bool modoShinkai;
        bool empunhada;
};

