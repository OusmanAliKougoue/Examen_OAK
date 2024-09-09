#ifndef OBJET2_H
#define OBJET2_H
#include "Objet.h"
#include <iostream>
#include <string>
using namespace std;
class Objet2 :public Objet
{
private:
   string grade;
public:
    Objet2(string& nm,int ag,string& grd);
    ~Objet2();
    void afficher();
};
#endif