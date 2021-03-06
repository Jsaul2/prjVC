// Conditions_exo13.cpp : définit le point d'entrée pour l'application console.
// Ajouter au programme de l’exercice 13, une appréciation du temps de l’utilisateur en fonction de son temps de réponse.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <chrono>

using namespace std;

int main()
{
	string phraseModel = "Portez ce vieux whisky au juge blond qui fume";
	string phrase;

	cout << "Saisir cette phrase : " << phraseModel << endl;

	auto start = chrono::high_resolution_clock::now();
	getline(cin, phrase);
	auto end = chrono::high_resolution_clock::now();
	auto elapsed_s = chrono::duration_cast
		<chrono::seconds>(end - start).count();

	if (phrase != phraseModel) {
		cout << "La phrase que vous avez saisi ne correspond pas !" << endl;
	}
	else
	{
		//supérieur à 20 	tortue unijambiste
		if (elapsed_s >= 20)
		{
			cout << "\n----------TORTUE UNIJAMBISTE----------" << endl;
			cout << "Vous avez une vitesse de frappe de " << elapsed_s << " seconds" << endl;
		}
		//entre 18 et 20 	tortue
		else if (elapsed_s >= 18 && elapsed_s < 20)
		{
			cout << "\n----------TORTUE----------" << endl;
			cout << "Vous avez une vitesse de frappe de " << elapsed_s << " seconds" << endl;
		}
		//entre 16 et 18 	débutant
		else if (elapsed_s >= 16 && elapsed_s < 18)
		{
			cout << "\n----------DEBUTANT----------" << endl;
			cout << "Vous avez une vitesse de frappe de " << elapsed_s << " seconds" << endl;
		}
		//entre 14 et 16 	amateur
		else if (elapsed_s >= 14 && elapsed_s < 16)
		{
			cout << "\n----------AMATEUR----------" << endl;
			cout << "Vous avez une vitesse de frappe de " << elapsed_s << " seconds" << endl;
		}
		//entre 12 et 14 	initié
		else if (elapsed_s >= 12 && elapsed_s < 14)
		{
			cout << "\n----------INITIE----------" << endl;
			cout << "Vous avez une vitesse de frappe de " << elapsed_s << " seconds" << endl;
		}
		//entre 10 et 12 	dactylo
		else if (elapsed_s >= 10 && elapsed_s < 12)
		{
			cout << "\n----------DACTYLO----------" << endl;
			cout << "Vous avez une vitesse de frappe de " << elapsed_s << " seconds" << endl;
		}
		//entre 8 et 10 	hacker
		else if (elapsed_s >= 8 && elapsed_s < 10)
		{
			cout << "\n----------HACKER----------" << endl;
			cout << "Vous avez une vitesse de frappe de " << elapsed_s << " seconds" << endl;
		}
		//entre 6 et 8 	gourou
		else if (elapsed_s >= 6 && elapsed_s < 8)
		{
			cout << "\n----------GOUROU----------" << endl;
			cout << "Vous avez une vitesse de frappe de " << elapsed_s << " seconds" << endl;
		}
		//entre 4 et 6 	gamer
		else if (elapsed_s >= 4 && elapsed_s < 6)
		{
			cout << "\n----------GAMER----------" << endl;
			cout << "Vous avez une vitesse de frappe de " << elapsed_s << " seconds" << endl;
		}
		//inférieur à 4 	robot
		else if (elapsed_s < 4)
		{
			cout << "\n----------ROBOT----------" << endl;
			cout << "Vous avez une vitesse de frappe de " << elapsed_s << " seconds" << endl;
			//inférieur à 0.1 	tricheur
			if (elapsed_s < 0.1)
			{
				cout << "\n----------TRICHEUR----------" << endl;
				cout << "Vous avez une vitesse de frappe de " << elapsed_s << " seconds" << endl;
			}
		}
		
	}
	return 0;
}

