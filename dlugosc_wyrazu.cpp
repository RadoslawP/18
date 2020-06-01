#include <iostream>

using namespace std;

int main()
{
    string wyraz;

    cout <<"Podaj prosze wyraz:"<< endl;
    cin>>wyraz;

    int dlugosc=wyraz.length();
    cout<<"Wyraz ten ma "<<dlugosc<<" liter."<<endl;

    for(int i=dlugosc-1; i>=0;i--)
    {
        cout<<wyraz[i];
    }

    return 0;
}
