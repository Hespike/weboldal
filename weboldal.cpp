#include <string>

using namespace std;

class Weboldal{
    string url_cim;
    unsigned int latogatok_szama;

public:
    Weboldal(const string& urlCim, unsigned int latogatokSzama = 0) : url_cim(urlCim), latogatok_szama(latogatokSzama) {}

    bool operator!(){
        latogatok_szama = 0;
        return true;
    }

    Weboldal& operator++(){
        latogatok_szama++;
        return *this;
    }

    Weboldal operator++(int){
        Weboldal o = *this;
        operator++();
        return o;
    }
