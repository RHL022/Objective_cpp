#include "zlab10.h"
#include <vector>
#include <iostream>
using namespace std;

void Zlab10::wektor()
{
    vector<double> wektor;

    wektor.push_back(2.3);
    wektor.push_back(4.5);
    wektor.push_back(-2.3);
    wektor.push_back(0.1);

    cout << "Rozmiar wektora: " << wektor.size() << endl;
    for(double d : wektor) cout << d << " ";
    cout << endl << endl;

    for(unsigned long i=5; i<10; i++) wektor[i]=3.2;
    cout << "Rozmiar wektora " << wektor.size() <<endl;
    for (double d : wektor) cout << d << " ";
    cout << endl << endl;

    wektor.resize(12);
    for(unsigned long i=5; i<10; i++) wektor[i]= 3.2;
    cout << "Rozmiar wektora: " << wektor.size() << endl;
    for(double d : wektor) cout << d << " ";
    cout << endl << endl;

    for(unsigned long i=0; i<wektor.size(); i++)
        wektor[i]= i;
        cout << "Rozmiar wektora: " <<wektor.size()<< endl;

    for(double d : wektor) cout << d << " ";
    cout << endl << endl;

    for(double & d: wektor) d=3.14;

    for(double d: wektor) cout << d << " ";
    cout << endl << endl;

    wektor.clear();
    cout << "Rozmiar wektora: " << wektor.size() << endl;
    for(double d : wektor) cout << d << " ";
    cout << endl << endl;

}

void Zlab10::wektor_sortowanie()
{
    vector<int> wektor;

    wektor.resize(13);



}
