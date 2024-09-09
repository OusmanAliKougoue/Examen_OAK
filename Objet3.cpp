#include "Objet3.h"
Objet3::Objet3(string& nm,int ag,string& dpl):Objet(nm,ag)
{
    cout<<"\nAppel du constructeur pour la classe Objet3 adresse="<<this<<endl;
    diplome=dpl;
}

Objet3::~Objet3()
{
    cout<<"\nAppel du destructeur pour la classe Objet3 adresse="<<this<<endl;
}
void Objet3::afficher()
{
    Objet::afficher();
    cout<<"diplome :"<<diplome<<endl; 
}