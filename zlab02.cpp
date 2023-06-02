#include "zlab02.h"
#include <iostream>
#include <limits>
#include <typeinfo>
using namespace std;

ZLab02::ZLab02()
{

}

void ZLab02::zadanie_2_3()
{
int a = -3;
unsigned int b;
b = 5;
int int_min = numeric_limits<int>::min();
int int_max = numeric_limits<int>::max();

unsigned int unsigned_int_min
        = numeric_limits<unsigned int>::min();
unsigned int unsigned_int_max
        = numeric_limits<unsigned int>::max();

long long int_zakres =
        static_cast<long>(int_max)
        - static_cast<long>(int_min);
long long unsigned_int_zakres =
        static_cast<long>(unsigned_int_max)
        - static_cast<long>(unsigned_int_min);

cout << "Zmienna c1 jest typu: " << typeid (a).name()
     << " ma rozmiar: " << sizeof (a) << "bajtów"
     << endl << "Zakres tej zmiennej to: " << int_min
     << " -> " << int_max << ", to oznacza " <<
     int_zakres << " różnych wartości " << endl << "Aktualna wartość zmiennej to: " << a << endl << endl;

cout << "Zmienna c2 jest typu: " << typeid (b).name() << " ma rozmiar: " << sizeof (b)
     << " bajtow" << endl << "Zakres tej zmiennej to: " << unsigned_int_max << ", to oznacza " << unsigned_int_zakres << "Aktualna wartość zmiennej to: "
     << b << endl << endl;
}
