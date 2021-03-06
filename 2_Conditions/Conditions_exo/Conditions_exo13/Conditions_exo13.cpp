// Conditions_exo13.cpp : définit le point d'entrée pour l'application console.
// Écrire un programme qui teste votre vitesse de frappe au clavier. Attendez que l’utilisateur écrive le pangramme « Portez ce vieux whisky au juge blond qui fume », puis affichez le temps qu’il aura mis pour l’écrire. 

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
	auto elapsed_ms = chrono::duration_cast
		<chrono::milliseconds>(end - start).count();

	if (phrase != phraseModel) {
		cout << "La phrase que vous avez saisi ne correspond pas !" << endl;
		}
	else
	{
		cout << "---------------------------------------------------" << endl;
		cout << "Vous avez une vitesse de frappe de " << elapsed_ms << " ms" << endl;
	}
    return 0;
}

