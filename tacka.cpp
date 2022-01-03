#include "tacka.h"
#include <cmath>

int Tacka::getX() const {
    return x;
}

int Tacka::getY() const {
    return y;
}

double udaljenost(const Tacka &t1, const Tacka &t2) {
    return sqrt(pow(t1.getX() - t2.getX(), 2) + pow(t1.getY() - t2.getY(), 2));
}

bool operator==(const Tacka &t1, const Tacka &t2) {
    if (t1.getX() == t2.getX() && t1.getY() == t2.getY())
        return true;

    return false;
}

ostream &operator<<(ostream &os, const Tacka &t) {
    return os << "(" << t.getX() << ", " << t.getY() << ")" << endl;
}

