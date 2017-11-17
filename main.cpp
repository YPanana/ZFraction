/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include "ZFraction.h"

using namespace std;

int main()
{
    ZFraction a(4,10), b(2,5), c(1,3), d(2), e;
    
    cout<<a<<" + "<<e<<" = "<<a+e<<endl;
    
    cout<<a<<" * "<<e<<" = "<<a*e<<endl;
    
    if (a < b) {
        cout<<a<<" est inferieur a "<<b<<endl;
    }
    else if (a == b) {
        cout<<a<<" est egal a "<<b<<endl;
    }
    else {
        cout<<a<<" est superieur a "<<b<<endl;
    }

    return 0;
}


