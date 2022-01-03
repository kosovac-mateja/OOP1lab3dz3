#ifndef _obicno_vozilo_h_
#define _obicno_vozilo_h_

#include "vozilo.h"

class ObicnoVozilo : public Vozilo {
    double startnaCena() const override { return 120; }

public:
    ObicnoVozilo(string mod) : Vozilo(mod) {}
};


#endif
