#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector v1(3);
    cout<< v1 <<endl;
    v1[2] = 3;
    
    Vector v2(3);
    v2[2] = 5;
    v2[1] = 4;
    cout<< v2 <<endl; 
    
    Vector v3 = v1 + v2;
    cout<< v3 <<endl;
    
    Vector v4(3);
    v4[0]=5;
    v4[1]=6;
    v4[2]=8;
    
    v4+=v3;
    cout<< v4 <<endl;
    return 0; 
}

