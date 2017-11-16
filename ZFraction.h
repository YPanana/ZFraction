#ifndef ZFRACTION_H
#define ZFRACTION_H

#include <iostream>

class ZFraction {
    
    public:
    
    //Constructeurs
    ZFraction();                //1.Par defaut
    ZFraction(int n);           //2.Juste le numerateur
    ZFraction(int n, int d);    //3.Numerateur et denominateur
    
    //Methodes publiques
    //Afficher la fraction dans la console
    void afficher(std::ostream &flux) const;
    
    //Surcharge d'operateurs
    ZFraction& operator+=(ZFraction const& a);
    
    private:
    
    //Attributs
    int m_numerateur;   //Le numerateur de notre fraction.
    int m_denominateur; //Le denominateur de notre fraction.
    
    //Methodes privees
    //Simplification de fractions
    void simplifierFraction();
};

//Surcharge d'operateurs
//Flux d'affichage
std::ostream& operator<<(std::ostream &flux, ZFraction const& fraction);

//Addition
ZFraction operator+(ZFraction const& a, ZFraction const& b);

//Fonction pour calculer le PGCD de 2 nombres
int pgcd(int a, int b);

#endif