/*************************************************************************
                           LigneLog  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <LigneLog> (fichier LigneLog.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <vector>
#include <sstream>

//------------------------------------------------------ Include personnel
#include "LigneLog.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type LigneLog::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void LigneLog::Afficher() const{
	cout << IP << endl;
cout << date<< endl;
cout <<  h << endl;
cout <<  m << endl;
cout <<  s << endl;
cout << fus_hor << endl;
cout << requete << endl;
cout << cible << endl;
 cout << is_html << endl;
cout << statut << endl;
cout << donnees << endl;
cout << ref << endl;
}

string LigneLog::GetCible() const
{
	return cible;
}
string LigneLog::GetRef() const
{
	return ref;
}
string LigneLog::GetRequete() const
{
	return requete;
}
	
int LigneLog::GetHeure()const
{
	return h;
}

bool LigneLog::GetIsHtml()const {
	return is_html;
}

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur


LigneLog::LigneLog (const string l)
// Algorithme :
//
{

stringstream ss(l);
getline (ss, IP, ' ');
string a;
getline(ss, a, '[');
getline(ss,date,':');
getline(ss,a,':');
h=stoi(a);
getline(ss,a,':');
m=stoi(a);
getline(ss,a,' ');
s=stoi(a);
getline(ss,a,']');
fus_hor=stoi(a);

ss.ignore(2);
getline(ss,requete,' ');

ss.ignore(1);
getline(ss,cible,' ');
if(cible.find("html") != std::string::npos){
	is_html=true;
}else {is_html=false;
}
getline(ss,a,' ');
getline(ss,a,' ');
statut=stoi(a);
getline(ss,a,' ');
donnees=stoi(a);

getline(ss,a,'"');
getline(ss,a,'"');
ref=a;
if(a.find("http://intranet-if.insa-lyon.fr/")!= std::string::npos)
{stringstream ss2(a);
getline(ss2,a,'/');
getline(ss2,a,'/');
getline(ss2,a,'/');
getline(ss2,ref,'"');
}


#ifdef MAP
    cout << "Appel au constructeur de <LigneLog>" << endl;
#endif
} //----- Fin de LigneLog


LigneLog::~LigneLog ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <LigneLog>" << endl;
#endif
} //----- Fin de ~LigneLog


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

