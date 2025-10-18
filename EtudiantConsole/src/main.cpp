#include "Etudiant.h"
#include <iostream>
using namespace std;

int main() {
    Etudiant e;
    e.setNom("Lamia");
    e.setCin("AB123456");
    e.setNote1(14);
    e.setNote2(16);
    e.setNote3(18);

    e.afficher();
    return 0;
}
