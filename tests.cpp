#include <iostream>
#include <cassert>
#include "tests.h"
#include "primmaxim.h"

using namespace std;

void test()
{
    assert(primmax(6)==5);
    assert(primmax(21)==19);
    assert(primmax(11)==7);
    cout<<"Toate testele au rulat cu succes!"<<endl;
}


