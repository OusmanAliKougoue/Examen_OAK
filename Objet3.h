#ifndef OBJET3_H
#define OBJET3_H
#include "Objet.h"
#include <iostream>
#include <string>
using namespace std;
class Objet3 :public Objet
{
private:
   string diplome;
public:
    Objet3(string& nm,int ag,string& dpl);
    ~Objet3();
    void afficher();
};
#endif