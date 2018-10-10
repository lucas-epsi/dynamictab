#include <vector>
#include <iostream>
#include "etudiant.h"
#include <fstream>

using namespace std;

	int main(){


	vector<int> tab(3);

	tab[0]=3;
	tab[1]=4;
	tab[2]=5;
	tab.erase(tab.begin()+1);
	cout << tab[0] << " "<< tab[1] <<" "<<tab[2]<<" "<<endl;

	tab.push_back(1000);
	cout << tab[2]<<endl;
	cout << tab.size() <<endl;
	cout << tab[0]<<" "<<tab[1]<<" "<<tab[2]<<" "<<tab[3]<<endl;


	cout << "debut exercice :-)"<<endl;

	vector <etudiant> epsi;
	string tmp_name;
	int tmp_note;
	string choix;
	bool yes = true;
	int i;

	ofstream f_notes;
	f_notes.open("notes.txt");
	do{
	cout << "entrer nouvel étudiant?  y/n "<<endl;
	cin>>choix;
	if(choix=="y"){
	yes = true;
	cout <<"Entrez le nom de l'étudiant"<<endl;
	cin>>tmp_name;
	cout <<"Entrez la note de l'étudiant"<<endl;
	cin>>tmp_note;
	epsi.push_back(etudiant());
	epsi[i].nom = tmp_name;
	epsi[i].note = tmp_note;
	// ecrire le nom et le prénom de l'élève dans un fichier
	f_notes<<epsi[i].nom<<"		"<<epsi[i].note<<endl;

	}else{yes=false;}
	i++;
	} while (yes==true);
	f_notes.close();

	cout << "la liste des etudiants"<<endl;
	for(int i =0; i<epsi.size();i++){
	cout << epsi[i].nom<<"   "<<epsi[i].note <<endl;
	}

	//recherche d'un étudiant dans la liste

	cout <<"Entrez le nom de l'étudiant à rechercher dans la liste"<<endl;
	cin>>tmp_name;
	for(int i=0;i<epsi.size();i++){

	if(tmp_name==epsi[i].nom){
	cout <<"la note de l'étudiant "<<epsi[i].nom<<" est "<<epsi[i].note<<endl;
	break;
	}
	}

	return 0;

}
