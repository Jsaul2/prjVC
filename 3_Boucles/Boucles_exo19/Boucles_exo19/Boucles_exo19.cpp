// Boucles_exo19.cpp : définit le point d'entrée pour l'application console.
// Écrire un programme qui calcule une moyenne. L’utilisateur peut rentrer autant de nombres qu’il le souhaite. Lorsque l’utilisateur rentre le nombre -1 qui indique la fin de la liste, le programme affiche la moyenne de tous les nombres entrés. 

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{	
	float nb = 0;
	vector<float> tab;

	cout << "--------------------LISTE DE NOMBRE--------------------" << endl;
	cout << "Saisir des nombres (-1 pour indiquer la fin de la liste)" << endl;
	while (nb != -1)
	{		
		cin >> nb;
		tab.push_back(nb);
	}
	cout << "Fin de la liste" << endl;

	cout << "\n--------------------MOYENNE--------------------" << endl;
	int taille_tab = tab.size() - 1;

	float moyenne = 0;
	for (int i(0); i < taille_tab; ++i) {
		moyenne += tab[i];
	}

	moyenne /= taille_tab;

	cout << "Moyenne : " << moyenne << endl;
    return 0;
}

