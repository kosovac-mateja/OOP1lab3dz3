#include "lista.h"
#include "tacka.h"
#include "put.h"
#include "obicnoVozilo.h"

int main() {
    try {
        ObicnoVozilo ov("Volkswagen");

        cout << ov << ov.cenaPrevoza(100);
    }
    catch (exception e) {}
}