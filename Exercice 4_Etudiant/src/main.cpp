#include "Etudiant.h"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Combien d'etudiants voulez-vous saisir ? ";
    cin >> n;

    Etudiant* tab = new Etudiant[n];

    for (int i = 0; i < n; i++) {
        string nom, prenom;
        int age;
        float moyenne;
        cout << "\nEtudiant " << i + 1 << " :" << endl;
        cout << "Nom : "; cin >> nom;
        cout << "Prenom : "; cin >> prenom;
        cout << "Age : "; cin >> age;
        cout << "Moyenne : "; cin >> moyenne;

        tab[i] = Etudiant(nom, prenom, age, moyenne);
    }

    cout << "\nListe des etudiants :\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEtudiant " << i + 1 << " :\n";
        tab[i].afficher();
    }

    delete[] tab;
    return 0;
}
