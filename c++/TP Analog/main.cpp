#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include "LigneLog.h"
#include "Analyse.h"
using namespace std;

int main (int args, char ** lstarg){
	/*if(args==1)
	{
		cerr << " Veuillez saisir au mois un argument apres ./analog" << endl;
	} 
	
	
	
	string options[3] ;
	int i=0;
	options
	string fichier=  lstarg[args-1];
	cout << fichier << endl;*/
	
	
/*	string a ="ab";
	string s= "192.168.0.0 - - [08/Sep/2012:11:16:02 +0200] \"GET /temps/4IF16.html HTTP/1.1\" 200 12106 \"http://intranet-if.insa-lyon.fr/temps/4IF15.html\" \"Mozilla/5.0 (Windows NT 6.1; WOW64; rv:14.0) Gecko/20100101 Firefox/14.0.1\" ";
	cout << s << endl;
	LigneLog *l = new LigneLog (s);
	l->Afficher();
	* */
	string fich="test.log";
	Analyse a =Analyse(fich);
	a.MakeGraphe(true);
	a.AfficherClassement(15);
	
	
	a.GenererGraphe("graphe");
	
/*	vector < int > v ={ 1, 5 , 8 ,10 ,-5};
	vector<int>::iterator result;
result = find( v.begin(), v.end(), 12 );
int a= std::distance(v.begin(), result);
cout << a << endl;*/
}
