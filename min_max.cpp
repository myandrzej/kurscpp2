#include<iomanip>
#include <iostream>
using namespace std;
int main()
{
int min, max;
int tab[10];
cout<<"Podaj 10 liczb: "<<endl;
for (int i=0; i<10; i++)
{
    cin>>tab[i];
}

min=tab[0];
max=tab[0];
for (int i=0; i<10; i++)
{
    
    if (tab[i]<min)
        min=tab[i];
    if (tab[i]>max)
        max=tab[i];
cout<<"Min: " <<min<<endl;
cout<<"Max: " <<max<<endl;
}
}
