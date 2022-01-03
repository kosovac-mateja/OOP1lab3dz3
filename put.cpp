#include "put.h"
#include "greske.h"


void Put::operator+=(const Tacka &t) {
    if (postoji(t)) throw GTackaDuplikat();

    put += t;
}

bool Put::postoji(const Tacka &t) {
    for (int i = 0; i < put.getBrElem(); i++) {
        if (put[i] == t)
            return true;
    }

    return false;
}

double Put::duzinaPuta() {
    double d = 0;

    for (int i = 0; i < put.getBrElem() - 1; i++) {
        d += udaljenost(put[i], put[i + 1]);
    }

    return d;
}

ostream &operator<<(ostream &os, const Put &t) {
    t.put.ispis(os);

    return os;
}


