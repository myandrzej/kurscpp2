#include<iomanip>
#include <iostream>
using namespace std;
int main()
{
double suma=0;
double tab[8];
cout<<"Podaj 8 liczb: "<<endl;
for (int i=0; i<8; i++)
{
    cin>>tab[i];
    suma = suma+tab[i];
}
cout << fixed << setprecision(2);
double srednia=suma/8.00;
cout<<"Srednia wynosi: " <<srednia<<endl;
    return 0;
}
