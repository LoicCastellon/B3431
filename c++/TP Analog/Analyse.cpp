/*************************************************************************
                           Analyse  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Analyse> (fichier Analyse.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>
#include <map>

//------------------------------------------------------ Include personnel
#include "Analyse.h"
#include "LigneLog.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Analyse::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void Analyse::AfficherClassement(int position ){
multimap<int, string> classement;
	for(unordered_map<string, int>::iterator it=mapClassement.begin(); it!=mapClassement.end(); ++it)
  {
		classement.insert(std::pair<int,string>(it->second,it->first) );
  }
 
 int i=0;
 multimap<int, string>::reverse_iterator ri=classement.rbegin();
 while (i<position &&	ri!=classement.rend()){
	  cout << ri->second << " (" << ri->first << " hits)" << endl;
	 ++ri ;
	 i++; 
 }
}

void Analyse::MakeRanking(bool extension , int heure)
{
	ifstream fichier(nom_fichier, ios::in);
	string ligne;
	while(getline(fichier, ligne)){
		LigneLog lignel = LigneLog(ligne);
		bool ajouter=true;
		if(lignel.GetRequete()=="GET"){
			if(extension){
				if(lignel.GetIsHtml()==false){
				ajouter=false;
			}
		}
		if (heure != -1){
			if (lignel.GetHeure()!=heure){
				ajouter=false;
			}
		}
		if(ajouter){
			string cible=lignel.GetCible();
			++mapClassement[cible];
		}
	}
	}
}

void Analyse::MakeGraphe(bool extension , int heure)
{// gerer referent extension
	ifstream fichier(nom_fichier, ios::in);
	string ligne;
	while(getline(fichier, ligne)){
		LigneLog lignel = LigneLog(ligne);
		bool ajouter=true;
		if(lignel.GetRequete()=="GET"){
		if(extension){
			if(lignel.GetIsHtml()==false){
				ajouter=false;
			}
		}
		if (heure != -1){
			if (lignel.GetHeure()!=heure){
				ajouter=false;
			}
		}
		if(ajouter){
			string cible=lignel.GetCible();
			++mapClassement[cible];
			
			//remplir mapGraphe;
			string referant = lignel.GetRef();
			unordered_map<string, unordered_map<string, int>>::iterator it=mapGraphe.find(referant);
			if(it!=mapGraphe.end()){
				unordered_map<string, int> sortie = mapGraphe[referant];
				unordered_map<string, int>::iterator it2=sortie.find(cible);
				if(it2!=sortie.end()){
					++sortie[cible];
				}else{
					sortie[cible]=1;
				}
				mapGraphe[referant]=sortie;
			}else{
				unordered_map<string, int> sortie;
				sortie[cible]=1;
				mapGraphe[referant]=sortie;
			}
		}
	}
	}
	
	
}

void Analyse::GenererGraphe(string fichierDot)
{
	string file = fichierDot +".dot";
	ofstream fichier(file, ios::out);
	fichier << "digraph {"<< endl;
	int i=0;
	
	vector <string> node;
	for (unordered_map<string, unordered_map<string, int>>::iterator it=mapGraphe.begin(); it!=mapGraphe.end(); ++it){
		  node.push_back(it->first);
		  fichier << "node" <<i << " [label=\"" << it->first << "\"];" << endl;
		  i++;
	  }
	  
	  for (unordered_map<string, unordered_map<string, int>>::iterator it=mapGraphe.begin(); it!=mapGraphe.end(); ++it){
		  unordered_map<string, int> sortie = mapGraphe[it->first];
		  
		for (unordered_map<string, int>::iterator it2=sortie.begin(); it2!=sortie.end(); ++it2){
			vector<string>::iterator result;
			result = find( node.begin(), node.end(),it2->first);
		unsigned int distance= std::distance(node.begin(), result);
			if(distance==node.size()){
				node.push_back(it2->first);
				fichier << "node" <<i << " [label=\"" << it2->first << "\"];" << endl;
				i++;
			}
			
		fichier << "node" << std::distance(node.begin(), find(node.begin(), node.end(),it->first)) << " -> node" << distance << " [label=\"" << it2->second << "\"];" << endl ;
			
			
		}
		
		
		  
			  
			  
	  
	 }
	 fichier << "}" << endl;
		  
		  
	
}

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur



Analyse::Analyse (string nomFichier )
// Algorithme :
//
{
	nom_fichier=nomFichier;
#ifdef MAP
    cout << "Appel au constructeur de <Analyse>" << endl;
#endif
} //----- Fin de Analyse


Analyse::~Analyse ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Analyse>" << endl;
#endif
} //----- Fin de ~Analyse


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


