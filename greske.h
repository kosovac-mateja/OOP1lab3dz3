#ifndef _greske_h_
#define _greske_h_

#include <exception>
#include <iostream>

using namespace std;

class GNepravilanIndeks : public exception {
public:
    GNepravilanIndeks() : exception() { cout << "Greska: Ne postoji element sa zadatim indeksom!"; }
};

class GTackaDuplikat : public exception {
public:
    GTackaDuplikat() : exception() { cout << "Greska: Tacka vec postoji na putu!"; }
};


#endif
