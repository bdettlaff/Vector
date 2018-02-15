#include <iostream>
#include "Vector.h"

using namespace std;

ostream & operator<<(ostream & wyjscie, Vector & obiekt)
{

    int i; 
    for(i=0; i<obiekt.rozmiar; i++)
    {
        if(i==0)
        {
            wyjscie<<"(";
        }
        else
        {
            wyjscie<<",";
        }

            wyjscie<<obiekt.dane[i];
    }
        wyjscie<<")";
    
    return wyjscie;
}

int & Vector::operator[](int index)
{
    return dane[index];
}

Vector Vector::operator+(const Vector & obiekt)
{   
    int i;
    for(i=0; i<this->rozmiar; i++)
    {
        this->dane[i]=this->dane[i]+obiekt.dane[i];
    }
    
    return *this;
}

Vector & Vector::operator+=(const Vector & obiekt)
{   
    int i;
    for(i=0; i<this->rozmiar; i++)
    {
        this->dane[i]=this->dane[i]+obiekt.dane[i];
    }
    
    return *this;
}

Vector::Vector(int wielkosc)
{
    int i;
    this->rozmiar=wielkosc;
    dane = new int[wielkosc];

    for(i=0;i<wielkosc;i++)
    {
        dane[i]=0;
    }
}

Vector::~Vector()
{
    delete[] dane;
}

