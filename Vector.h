#include <iostream>

using namespace std;

class Vector
{
    private:
        int *dane;
        int rozmiar;
    public:
        Vector(int wielkosc);
        ~Vector(); 
        friend ostream & operator<<(ostream & wyjscie, Vector & obiekt);
        Vector operator+(const Vector & obiekt);
        Vector & operator+=(const Vector & obiekt); 
        int & operator[](int index);
};

