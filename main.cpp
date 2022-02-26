#include "primmaxim.h"
#include "tests.h"

int main()
{
    int n,fin;
    test();
    readData(n);
    fin=primmax(n);
    printData(fin);
    return 0;
}