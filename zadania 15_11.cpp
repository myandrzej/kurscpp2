/* 1. Oblicz średnią prędkość pojazdu
Wczytaj od użytkownika dystans (w kilometrach) i czas podróży (w godzinach).
Oblicz średnią prędkość i wypisz wynik w km/h.
*/
#include <iostream>
using namespace std;

int main()
{
double dystans, czas, srednia;
cout<<"Podaj dystans w km: ";
cin>>dystans;

cout<<"Podaj czas w godzinach ";
cin>>czas;
srednia=dystans/czas;
cout<<"Srednia predkosc wynosi: "<<srednia<<" km/h";

}

/*2. Oblicz pole prostokąta i przekątną
Program wczytuje długość i szerokość prostokąta, a następnie oblicza jego pole i długość przekątnej.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
double dlugosc, szerokosc, pole, przekatna;
cout<<"Podaj dlugosc boku prostokata: ";
cin>>dlugosc;
cout<<"Podaj szerokosc prostokata: ";
cin>>szerokosc;
pole=dlugosc*szerokosc;
przekatna = sqrt(dlugosc*dlugosc+szerokosc*szerokosc);
cout<<"Pole prostokata: "<<pole <<endl;
cout<<"Dlugosc przekatnej: "<<przekatna <<endl;

}

3. Przeliczanie sekund na godziny, minuty i sekundy

Wczytaj liczbę sekund i oblicz, ile to godzin, minut i sekund.

4. Oblicz miesięczne zużycie energii

Program wczytuje moc urządzenia (w watach) oraz liczbę godzin pracy dziennie.
Oblicz koszt miesięcznego zużycia energii, przyjmując cenę 1 kWh od użytkownika.

5. Oblicz należny podatek dochodowy

Wczytaj kwotę dochodu użytkownika i oblicz podatek wg uproszczonego wzoru:

jeśli dochód ≤ 30 000 zł → podatek 12%,

jeśli dochód > 30 000 zł → podatek 12% od 30 000 zł + 32% od nadwyżki.

6. Oblicz ilość farby potrzebnej do pomalowania pokoju

Program wczytuje długość i wysokość pokoju (w metrach), oraz informację, ile metrów kwadratowych można pomalować 1 litrem farby.
Oblicz, ile litrów farby trzeba kupić.
