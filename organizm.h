#ifndef ORGANIZM_H
#define ORGANIZM_H


class Organizm
{
public:
    const unsigned short limitPosilkow;
    const unsigned short kosztPotomka;

private:
    unsigned short licznikZycia;
    unsigned short licznikPosilkow;

public:
    Organizm(unsigned short dlugoscZycia,
             unsigned short limitPosilkow,
             unsigned short kosztPotomka);

    bool zywy() const
    {return licznikZycia > 0;}

    bool glodny() const
    {return zywy() && licznikPosilkow < limitPosilkow;}

    bool paczkujacy() const
    {return zywy() && licznikPosilkow > kosztPotomka;}

    unsigned short stanLicznikaZycia() const
    {return licznikZycia;}

    unsigned short stanLicznikaPosilkow() const
    {return licznikPosilkow;}

    bool posilek();
    bool potomek();

    void krokSymulacji();
};

#endif // ORGANIZM_H
/* void drukujOrganizm(const Organizm & o)
{
    cout << "LicznikZycia: "
         << o.stanLicznikaZycia()
         << " licznikPosilkow: "
         << o.stanLicznikaPosilkow() << endl
         << "limitPosilkow: "
         << o.limitPosilkow
         <<" kosztPotomka: "
         << o.kosztPotomka << endl
         <<"głodny: " << o.glodny()
        << " pączkujący: "
        << o.paczkujacy() << endl << endl;
}
int main()
{
    Organizm organizm1(8,3,2);
    Organizm organizm2 = organizm1;
    Organizm organizm3(organizm1);
    cout << "Wynik testu kreacji obiektów:"
         <<endl<<endl;
    drukujOrganizm(organizm1);
    cout << "Organizm2" << endl;
    drukujOrganizm(organizm1);
    cout << "Organizm3" << endl;
    drukujOrganizm(organizm2);

    organizm1.posilek();
    organizm1.posilek();
    organizm2.posilek();
    organizm3.krokSymulacji();

    cout << "Wynik testu niezależności: "<<endl<< endl;
    cout << "Organizm1:"<<endl;
    drukujOrganizm(organizm1);
    cout << "Organizm2" << endl;
    drukujOrganizm(organizm2);
    cout << "Organizm3" << endl;
    drukujOrganizm(organizm3);

    Organizm organizm4(8,3,2);
    cout << "Wynik testu symulacji:"
         <<endl << endl;
    cout << "Stan poczatkowy:" << endl;
    drukujOrganizm(organizm4);

    for(int i=1; i<11; i++){

        organizm4.krokSymulacji();

        if(organizm4.paczkujacy()){
            organizm4.potomek();
            cout << "---> Potomek" << endl;}
        else organizm4.posilek();

       cout << "Po wykonaniu kroku symulacji: "
            << i << endl;
       drukujOrganizm(organizm4);}

    return 0;
}
*/
