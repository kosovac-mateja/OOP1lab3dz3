#ifndef _put_h_
#define _put_h_

#include "lista.h"
#include "tacka.h"

class Put {
    Lista<Tacka> put;
public:
    void operator+=(const Tacka &t);

    bool postoji(const Tacka &t);

    double duzinaPuta();

    friend ostream &operator<<(ostream &os, const Put &t);
};


#endif
