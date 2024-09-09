#include "Objet2.h"
Objet2::Objet2(string& nm,int ag,string& grd):Objet(nm,ag)
{
    cout<<"\nAppel du constructeur pour la classe Objet2 adresse="<<this<<endl;
    grade=grd;
}

Objet2::~Objet2()
{
    cout<<"\nAppel du destructeur pour la classe Objet2 adresse="<<this<<endl;
}
void Objet2::afficher()
{
    Objet::afficher();
    cout<<"grade :"<<grade<<endl;
}