#include "Objet1.h"
Objet1::Objet1(string& nm,int ag,int sal):Objet(nm,ag)
{
    cout<<"\nAppel du constructeur pour la classe Objet1 adresse="<<this<<endl;
    salaire=sal;
}

Objet1::~Objet1()
{
    cout<<"\nAppel du destructeur pour la classe Objet1 adresse="<<this<<endl;
}
void Objet1::afficher()
{
    Objet::afficher();
    cout<<"salaire :"<<salaire<<endl;
}