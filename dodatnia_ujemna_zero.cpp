#include <iostream>
using namespace std;

int main() {
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba > 0) 
    {
        cout << "Liczba jest dodatnia." << endl;

        if (liczba % 2 == 0) {
            cout << "Liczba jest parzysta." << endl;
        } else {
            cout << "Liczba jest nieparzysta." << endl;
        }

    } else if (liczba < 0) {
        cout << "Liczba jest ujemna." << endl;
    } else {
        cout << "Liczba jest zerem." << endl;
    }

    return 0;
}
