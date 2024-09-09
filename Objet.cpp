#include "Objet.h"
Objet::Objet(string& nm,int ag)
{
    cout<<"\nAppel du constructeur pour la classe Objet adresse="<<this<<endl;
    nom=nm;
    age=ag;
}

Objet::~Objet()
{
    cout<<"\nAppel du destructeur pour la classe Objet adresse="<<this<<endl;
}
void Objet::afficher()
{
    cout<<"Nom:"<<nom<<endl;
    cout<<"Age :"<<age<<endl;
}