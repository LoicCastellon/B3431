/*************************************************************************
                           LigneLog  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <LigneLogLog> (fichier LigneLog.h) ----------------
#if ! defined ( LigneLog_H )
#define LigneLog_H
#include <string>
#include <string>
#include <cstring>
using namespace std;


//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <LigneLog>
//
//
//------------------------------------------------------------------------

class LigneLog 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	void Afficher() const;
	string GetCible() const;
	string GetRef() const;
	string GetRequete() const;
	int GetHeure()const;
	bool GetIsHtml() const;
	
//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur


    LigneLog (const string l);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~LigneLog ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
string IP;
string date;
int h;
unsigned int m;
unsigned int s;
int fus_hor;
string requete;
string cible;
bool is_html;
int statut;
int donnees;
string ref;
};

//-------------------------------- Autres définitions dépendantes de <LigneLog>

#endif // LigneLog_H

