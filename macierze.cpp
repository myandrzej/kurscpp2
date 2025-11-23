#include <iostream>
using namespace std;

int main()
{
    int macierz[3][3];
    cout<< "Podaj elementy macierzy 3x3: ";
    
    for (int i=0; i<3;i++)
    {
        for(int j=0; j<3; j++){
            
        cout<<"Element [" <<i << "][" <<j<<"]: ";
        cin>>macierz[i][j];
    }
}
cout<<"Nasza macierz: ";

for(int i=0; i<3; i++){
    cout<<"|";
    for(int j=0; j<3;j++)
    {
        cout<<macierz[i][j]<<" ";
    }
    cout<<"|\n";
}

}

