#ifndef _vozilo_h_
#define _vozilo_h_

#include <iostream>

using namespace std;

class Vozilo {
protected:
    string model;

    inline static const double jedinica = 0.1;

    virtual double startnaCena() const = 0;

    virtual void pisi(ostream &os) const { os << model << endl; }

public:
    Vozilo(string mod) : model(mod) {}

    double cenaPrevoza(double predjeniPut) const { return startnaCena() + predjeniPut * jedinica; }

    friend ostream &operator<<(ostream &os, const Vozilo &v) {
        v.pisi(os);
        return os;
    }
};


#endif
