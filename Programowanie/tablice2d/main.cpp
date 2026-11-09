
#include <iostream>
using namespace std;

void punktySiodlowe(const int tab[4][4]) {
    bool znaleziono = false;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            bool minWiersz = true;
            bool maxKolumna = true;

            for (int k = 0; k < 4; k++) {
                if (tab[i][k] < tab[i][j]) {
                    minWiersz = false;
                    break;
                }
            }

            for (int k = 0; k < 4; k++) {
                if (tab[k][j] > tab[i][j]) {
                    maxKolumna = false;
                    break;
                }
            }

            if (minWiersz && maxKolumna) {
                cout << "(" << i << "," << j << "), wartosc "
                     << tab[i][j] << endl;

                znaleziono = true;
            }
        }
    }

    if (!znaleziono) {
        cout << "Brak punktow siodlowych." << endl;
    }
}

int main() {
    int tab[4][4] = {
        {5,5,5,5},
        {5,5,5,5},
        {5,5,5,5},
        {5,5,5,5}
    };

    punktySiodlowe(tab);
}
