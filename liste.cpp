#include "liste.h"
liste::liste()
{
    cout<<"\nAppel du constructeur pour la classe liste adresse="<<this<<endl;
    debut=NULL;
    courant=NULL;
}

liste::~liste()
{
    cout<<"\nAppel du destructeur pour la classe liste adresse="<<this<<endl;
    while(debut!=NULL){
        Maillon* p=debut;
        debut=debut->next;
        delete p;
    }
}
void liste::insertion_queue(Objet* ob){
    Maillon* nouv=new Maillon(ob);
    if(debut==NULL){
        debut=courant=nouv;
    }
    else{
        courant->next=nouv;
        courant=nouv;
    }

}
    void liste::initlist(){
        courant=debut;
    }
    int liste::exist(){
        return courant!=NULL;
    }
    Objet* liste::prochain(){
        if(courant!=NULL){
            Objet* p=courant->donnee;
            courant=courant->next;
            return p;
        }else{
            return NULL;
        }
    }
    void liste::afficher(){
        initlist();
        while (exist())
        {
           Objet* p=prochain();
           if(p!=NULL){
            p->afficher();
           }
        }
    }