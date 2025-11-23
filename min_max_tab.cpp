#include <iostream>
using namespace std;

int main() {
    int macierz[3][3];
    int max_wartosc, min_wartosc;

    cout << "Podaj elementy macierzy 3x3:" << endl;

    // Wczytywanie macierzy i inicjalizacja max i min
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> macierz[i][j];
            if(i == 0 && j == 0) {
                max_wartosc = min_wartosc = macierz[i][j];
            } else {
                if(macierz[i][j] > max_wartosc) max_wartosc = macierz[i][j];
                if(macierz[i][j] < min_wartosc) min_wartosc = macierz[i][j];
            }
        }
    }

    // Wyświetlenie wyniku
    cout << "Największa wartość: " << max_wartosc << endl;
    cout << "Najmniejsza wartość: " << min_wartosc << endl;

    return 0;
}
