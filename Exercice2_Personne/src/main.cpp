#include <iostream>
#include "Personne.h"
using namespace std;

int main() {
    Personne* p = new Personne("Alice", 25);

    cout << "Nom : " << p->nom << ", Age : " << p->age << endl;

    delete p;

    return 0;
}
