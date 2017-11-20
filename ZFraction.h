#ifndef ZFRACTION_H
#define ZFRACTION_H

#include <iostream>

class ZFraction {
    
    public:
    
    //Constructeur
    ZFraction(int n = 0, int d = 1);
    
    //Methodes publiques
    void   afficher(std::ostream &flux)     const; //Afficher la fraction dans la console
    bool   estInferieur(ZFraction const& a) const; //Test si la fraction est inferieure a une autre
    bool   estEgal(ZFraction const& a)      const; //Test si la fraction est egale a une autre
    int    numerateur()                     const; //Renvoie la valeur du numerateur
    int    denominateur()                   const; //Renvoie la valeur du denominateur
    double nombreReel()                     const; //Convertit la fraction en nombre reel
    
    //Surcharge d'operateurs
    ZFraction& operator+=(ZFraction const& a);
    ZFraction& operator*=(ZFraction const& a);
    ZFraction& operator-=(ZFraction const& a);
    ZFraction& operator/=(ZFraction const& a);
    
    private:
    
    //Attributs
    int m_numerateur;   //Le numerateur de notre fraction.
    int m_denominateur; //Le denominateur de notre fraction.
    
    //Methodes privees
    //Simplification de fractions
    void simplifierFraction();
};

//Surcharge d'operateurs
std::ostream& operator<<(std::ostream &flux, ZFraction const& fraction);
ZFraction     operator-(ZFraction const& a); //Operateur "moins unaire" (b = -a)
ZFraction     operator+(ZFraction const& a, ZFraction const& b);
ZFraction     operator*(ZFraction const& a, ZFraction const& b);
ZFraction     operator-(ZFraction const& a, ZFraction const& b);
ZFraction     operator/(ZFraction const& a, ZFraction const& b);
bool          operator<(ZFraction const& a, ZFraction const& b);
bool          operator>(ZFraction const& a, ZFraction const& b);
bool          operator>=(ZFraction const& a, ZFraction const& b);
bool          operator<=(ZFraction const& a, ZFraction const& b);
bool          operator==(ZFraction const& a, ZFraction const& b);
bool          operator!=(ZFraction const& a, ZFraction const& b);

//Fonction pour calculer le PGCD de 2 nombres
int pgcd(int a, int b);

#endif
