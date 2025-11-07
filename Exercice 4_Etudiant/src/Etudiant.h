#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
using namespace std;

class Etudiant {
private:
    string nom;
    string prenom;
    int age;
    float moyenne;

public:
    Etudiant();
    Etudiant(string n, string p, int a, float m);
    void afficher() const;
};

#endif
