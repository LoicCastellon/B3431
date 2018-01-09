/*************************************************************************
                           Ligne  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Ligne> (fichier Ligne.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <vector>
#include <sstream>
//------------------------------------------------------ Include personnel
#include "Ligne.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Ligne::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur


Ligne::Ligne (const string l)
// Algorithme :
//
{
// tokens
vector<string> tokens;
stringstream ss(l);
string a;
while(getline(ss, a, '"'))
{
tokens.push_back(a);
}

//tab 1
vector<string> tab1;
stringstream ss2(tokens.at(0));
while(getline(ss2, a, ' '))
{
tab1.push_back(a);
}

IP=tab1.at(0);

string date_heure= tab1.at(3).substr(1);

vector<string> time;
stringstream ss3(date_heure);
while(getline(ss3, a, ':'))
{
time.push_back(a);
}

date= time[0];
h = stoi(time.at(1));
m = stoi(time.at(2));
s = stoi(time.at(3));
fus_hor=stoi(tab1.at(4).substr(0,5));

//tab2
vector<string> tab2;
stringstream ss4(tokens.at(1));
while(getline(ss4, a, ' '))
{
tab2.push_back(a);
}

requete= tab2.at(0);
lien =tab2.at(1);


//tab3
vector<string> tab3;
stringstream ss5(tokens.at(2));
while(getline(ss5, a, ' '))
{
tab3.push_back(a);
}

code=stoi(tab3.at(0));
donnees=stoi(tab3.at(1));












#ifdef MAP
    cout << "Appel au constructeur de <Ligne>" << endl;
#endif
} //----- Fin de Ligne


Ligne::~Ligne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Ligne>" << endl;
#endif
} //----- Fin de ~Ligne


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

