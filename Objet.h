#ifndef OBJET_H
#define OBJET_H
#include <iostream>
#include <string>
using namespace std;
class Objet
{
private:
    string nom;
    int age;
public:
    Objet(string& nm,int ag);
    virtual ~Objet();
    virtual void afficher();
    
};
#endif