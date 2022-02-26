#include <iostream>
#include "primmaxim.h"
using namespace std;

int primmax(long int n)
{
    int ok;
    for(int i=n-1;i>=2;i--)
    {
        ok=1;
        for(int d=2;d<=i/2;d++)
        {

            if(i%d==0)
                ok=0;
            if(i==2)
                ok=1;
        }
        if(ok==1)
            return i;
    }
    return 0;
}

void readData(int &n){
    cout<<"Dati n: ";
    cin>>n;}

void printData(int n){
    cout<<"Numarul cautat este: "<<n;}


