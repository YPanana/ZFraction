#include "ZFraction.h"

using namespace std;

//Constructeurs
//1.Par defaut : numerateur initialise a 0, denominateur a 1.
ZFraction::ZFraction() : m_numerateur(0), m_denominateur(1)
{
    
}

//2.Juste le numerateur : numerateur prend la valeur donnee, denominateur initialise a 1.
ZFraction::ZFraction(int n) : m_numerateur(n), m_denominateur(1)
{
    
}

//3.Numerateur et denominateur : numerateur et denominateur prennent les valeurs donnees.
ZFraction::ZFraction(int n, int d) : m_numerateur(n), m_denominateur(d)
{
    simplifierFraction();
}

//Methodes publiques
//Afficher la fraction dans la console
//(sous la forme : numerateur/denominateur)
void ZFraction::afficher(ostream &flux) const {
    flux<<m_numerateur<<'/'<<m_denominateur;
}

//Surcharge d'operateurs (membres de la classe)
//+=
ZFraction& ZFraction::operator+=(ZFraction const& a) {
    
    //a/b + c/d = a*d+c*b/b*d
    m_numerateur   *= a.m_denominateur + a.m_numerateur*m_denominateur; 
    m_denominateur *= a.m_denominateur;
    simplifierFraction();
    
    return *this;
}

//Methodes privees
//Simplification de fractions
void ZFraction::simplifierFraction() {
    int diviseur = pgcd(m_numerateur,m_denominateur);
    if (diviseur != 1) {
        m_numerateur   /= diviseur;
        m_denominateur /= diviseur;
    }
}

//Surcharges d'operateurs (non membres de la classe)
//Flux d'affichage
ostream &operator<<(ostream &flux, ZFraction const& fraction) {
    fraction.afficher(flux);
    return flux;
}

//Addition
ZFraction operator+(ZFraction const& a, ZFraction const& b) {
    ZFraction copieA(a); //Copie de a
    copieA += b;
    return copieA;
}

//Fonctions exterieures
//Fonction pour calculer le PGCD de 2 nombres
int pgcd(int a, int b) {
    while (b != 0)
    {
        const int t = b;
        b = a%b;
        a=t;
    }
    return a;
}