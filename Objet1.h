#ifndef OBJET1_H
#define OBJET1_H
#include "Objet.h"
#include <iostream>
#include <string>
using namespace std;
class Objet1 :public Objet
{
private:
   int salaire;
public:
    Objet1(string& nm,int ag,int sal);
    ~Objet1();
    void afficher();
};
#endif