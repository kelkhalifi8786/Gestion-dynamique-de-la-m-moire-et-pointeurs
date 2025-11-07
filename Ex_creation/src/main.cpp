#include <iostream>
using namespace std;

int main() {
    int taille;
    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    int* tableau = new int[taille];

    for (int i = 0; i < taille; ++i) {
        cout << "Entrez l'élément " << i << " : ";
        cin >> tableau[i];
    }

    cout << "Les valeurs saisies sont : ";
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    delete[] tableau;

    return 0;
}
