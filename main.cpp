#include <stdlib.h>
#include <iostream>
using std:: cout;
using std:: cin;

bool trocar (int &, int &);
bool trocar (double &, double &);

int main(int argc, char **argv)
{
    int a = 8;
    int b = 4;
    int c = 12;
    int d = 9;
    int e = 7;
    const int NITER = 5;
    int cont;
    
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << e << "\n";
    cout <<"\n";
    
    for (int i = 0; i < NITER - 1; i++ )
    {
        if (trocar(a,b))
            cont++;
        if (trocar(b,c))
            cont++;
        if (trocar(c,d))
            cont++;
        if (trocar(d,e))
            cont++;
    }
    
     
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << e << "\n";
    cout <<"\n";
   
    return 0;
}

bool trocar (int &x,  int &y)
{
    if > b
}
bool trocar (double &,x double &y)