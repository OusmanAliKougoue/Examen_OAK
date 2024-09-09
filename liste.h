#ifndef LISTE_H
#define LISTE_H
#include "Objet.h"
#include <iostream>
#include <string>
class Maillon 
{
    public:
    Objet* donnee;
    Maillon* next;
    Maillon(Objet* Ob):donnee(Ob){
        this->next=NULL;
    }
};
class liste
{
private:
    Maillon* debut;
    Maillon* courant;
public:
    liste();
    ~liste();
    void insertion_queue(Objet* ob);
    void afficher();
    void initlist();
    int exist();
    Objet* prochain();
    
};
#endif
