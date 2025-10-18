#include "Etudiant.h"
#include <iostream>
using namespace std;

Etudiant::Etudiant() {
    nom = "";
    cne = "";
    note1 = note2 = note3 = 0.0f;
}

void Etudiant::setNom(const string &n) { nom = n; }
void Etudiant::setCin(const string &c) { cne = c; }
void Etudiant::setNote1(float n1) { note1 = n1; }
void Etudiant::setNote2(float n2) { note2 = n2; }
void Etudiant::setNote3(float n3) { note3 = n3; }

string Etudiant::getNom() const { return nom; }
string Etudiant::getCin() const { return cne; }
float Etudiant::getNote1() const { return note1; }
float Etudiant::getNote2() const { return note2; }
float Etudiant::getNote3() const { return note3; }

float Etudiant::calculMoyenne() const {
    return (note1 + note2 + note3) / 3.0f;
}

void Etudiant::afficher() const {
    cout << "Nom : " << nom << endl;
    cout << "CIN : " << cne << endl;
    cout << "Notes : " << note1 << " | " << note2 << " | " << note3 << endl;
    cout << "Moyenne : " << calculMoyenne() << endl;
}
