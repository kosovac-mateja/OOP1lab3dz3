#ifndef _tacka_h_
#define _tacka_h_

#include <iostream>

using namespace std;

class Tacka {
    int x, y;
public:
    Tacka(int xx = 0, int yy = 0) : x(xx), y(yy) {}

    friend double udaljenost(const Tacka &t1, const Tacka &t2);

    int getX() const;

    int getY() const;

    friend bool operator==(const Tacka &t1, const Tacka &t2);

    friend ostream &operator<<(ostream &os, const Tacka &t);

};


#endif
