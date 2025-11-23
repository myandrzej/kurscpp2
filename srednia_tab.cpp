#include <iostream>
using namespace std;

int main() {
    int tab[10];
    int suma = 0, licznik = 0;

    cout << "Podaj 10 liczb:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> tab[i];
    }

    for(int i = 0; i < 10; i++) {
        if(tab[i] > 0) {
            suma += tab[i];
            licznik++;
        }
    }

    if(licznik == 0) {
        cout << "Brak dodatnich liczb w tablicy." << endl;
    } else {
        double srednia = (double)suma / licznik;
        cout << "Srednia z dodatnich liczb wynosi: " << srednia << endl;
    }

    return 0;
}
