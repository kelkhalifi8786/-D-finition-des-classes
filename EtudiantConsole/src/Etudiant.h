#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
using namespace std;

class Etudiant {
private:
    string nom;
    string cne;
    float note1;
    float note2;
    float note3;

public:
    Etudiant();

    // setters
    void setNom(const string &n);
    void setCin(const string &c);
    void setNote1(float n1);
    void setNote2(float n2);
    void setNote3(float n3);

    // getters
    string getNom() const;
    string getCin() const;
    float getNote1() const;
    float getNote2() const;
    float getNote3() const;

    // méthodes
    float calculMoyenne() const;
    void afficher() const;
};

#endif
