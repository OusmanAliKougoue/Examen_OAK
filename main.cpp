#include "Objet3.h"
#include "Objet2.h"
#include "Objet1.h"
#include "Objet.h"
#include "liste.h"
int main()
{
    cout<<"---------------------Objet1-----------------------"<<endl;
    string nom1="Ahmat";
    Objet1 ob1(nom1,24,3000);
    ob1.afficher();

    cout<<"---------------------Objet2-----------------------"<<endl;
    string nom2="Hassan";
    string grade="Lieutnant";
    Objet2 ob2(nom2,56,grade);
    ob2.afficher();

    cout<<"---------------------Objet3-----------------------"<<endl;
    string nom3="Ammar";
    string diplome="Master2";
    Objet3 ob3(nom3,30,diplome);
    ob3.afficher();

    cout<<"---------------------liste-----------------------"<<endl;
    liste l;
    l.insertion_queue(&ob1);
    l.insertion_queue(&ob2);
    l.insertion_queue(&ob3);
    l.afficher();
    cout<<"--------------------------------------------------"<<endl;



    return 0;
}