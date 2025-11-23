#include <iostream>
using namespace std;

int main() {
    int macierz[4][4];
    int suma = 0;

    cout << "Podaj elementy macierzy 4x4:\n";

    // Wczytywanie macierzy
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
        }
    }

    cout << "\nTwoja macierz:\n";

    for(int i = 0; i < 4; i++) {
        cout << "| ";
        for(int j = 0; j < 4; j++) {
           suma = suma+macierz[i][j]; 
        
        }
     
    }
cout<<"suma wszystkich elemenytow macierzy: " <<suma <<endl;
    return 0;
}
