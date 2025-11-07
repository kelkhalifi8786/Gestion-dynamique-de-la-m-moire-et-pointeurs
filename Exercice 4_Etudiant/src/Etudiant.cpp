#include "Etudiant.h"
#include <iostream>
using namespace std;

Etudiant::Etudiant() {
    nom = "Inconnu";
    prenom = "Inconnu";
    age = 0;
    moyenne = 0.0;
}

Etudiant::Etudiant(string n, string p, int a, float m) {
    nom = n;
    prenom = p;
    age = a;
    moyenne = m;
}

void Etudiant::afficher() const {
    cout << "Nom : " << nom << endl;
    cout << "Prenom : " << prenom << endl;
    cout << "Age : " << age << " ans" << endl;
    cout << "Moyenne : " << moyenne << endl;
}
