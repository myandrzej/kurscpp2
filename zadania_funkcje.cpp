/*1. Napisz funkcję roznica, która zwraca różnicę dwóch liczb całkowitych.

2. Napisz funkcję iloczyn, która zwraca iloczyn dwóch liczb całkowitych.

3. Napisz funkcję srednia, która zwraca średnią dwóch liczb zmiennoprzecinkowych.

4. Napisz funkcję czy_parzysta, która zwraca true, jeśli liczba jest parzysta, a false w przeciwnym wypadku.

5. Napisz wartosc_bezwzgledna, która zwraca wartość bezwzględną liczby całkowitej.

6. Napisz funkcję pole_prostokata, która zwraca pole prostokąta.

7. Napisz funkcję double pole_kola, która zwraca pole koła.

8. Napisz funkcję double obwod_kwadratu, która zwraca obwód kwadratu.

9. Napisz funkcję minimum, która zwraca mniejszą z dwóch liczb.

10. Napisz funkcję maximum, która zwraca wiekszosc z dwóch liczb.
*/

#include <iostream>
using namespace std;

int roznica (int a, int b)
{
    return a-b;
}

int iloczyn (int a, int b)
{
    return a*b;
}

double srednia (double a, double b)
{
return (a+b)/2.0; 
    
}
bool czy_parzysta (int n)
{
    return n%2==0;
}

int wartosc_bezwgledna (int n)
{
    if (n<0)
    return -n;
    else return n;
}

int pole_prostokata (int a,int b)
{
    return a*b;
}

double pole_kola(double r)
{
    const double PI=3.14;
    return PI*r*r;
}

int obwod_kwadratu (int a)
{
    return 4*a;
}

int minimum (int a, int b)
{
    if (a<b)
    return a;
    else return b;
}

int maximum (int a, int b)
{
    if (a>b)
    return a;
    else return b;
}
int main()
{
int a, b;
double x, y,r;
cout<<"Podaj pierwsza liczxbe: "<<endl;
cin>>a;
cout<<"Podaj druga liczxbe: "<<endl;
cin>>b;
cout<<"Roznica a-b = " << roznica(a, b) <<endl;
cout<<"Iloczyn a*b = " << iloczyn(a, b) <<endl;

cout<<"Podaj pierwsza liczbe do sredniej: "<<endl;
cin>>x;
cout<<"Podaj druga liczbe do sredniej: "<<endl;
cin>>y;
cout<<"Srednia liczb x i y= " << srednia(x, y) <<endl;
cout<<"Czy A jest parzyste? " <<czy_parzysta(a) <<endl;
cout<<"Wartosc bezwgledna z a " <<wartosc_bezwgledna(a) <<endl;
cout<<"Pole prostokata= " << pole_prostokata(a, b) <<endl;
cout<<"Podaj promien: "<<endl;
cin>>r;
cout<<"Pole kola= " << pole_kola(r) <<endl;
cout<<"Obwod kwadratu wynosi" <<obwod_kwadratu(a) <<endl;
cout<<"Minimum: " <<minimum(a,b) <<endl;
cout<<"Maximum: " <<maximum(a,b) <<endl;

}
